#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 



 
// void ahmed_nasser(){
//   ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//   #ifndef ONLINE_JUDGE   
//     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
//   #endif
// }
 double fx(double x ){
    return pow ( x , 2 ) - x - 3 ;
 }

 void ahmed(){
    double a , b , x0 , x1 , x2 ;
    cout << setprecision(10) ;
    if (fx(0) > 0 ){
        for ( int i = 1 ; ; i++){
            if ( fx(i) < 0) {
            a = i - 1 ;
            b = i ;
            break ;
            }
        }
    }
    else if (fx(0) < 0 ){
        for ( int i = 1 ; ; i++){
            if ( fx(i) > 0) {
            a = i - 1 ;
            b = i ;
            break ;
            }
        }
    }
    cout << "intervel time : [ " << a << " , " << b << " ]\n" ;
    x0 = a ; 
    x1 = b ;
    
    vector < double > v ;
    
    v.push_back(x1) ;
    for ( int i = 0 ; i < 100 ; i++) {
        if ( fx(x1) - fx(x0) == 0 or x1 - x0 == 0 ) break ;
        x2 = x1 - (( fx(x1) * (x1 - x0))/( fx(x1) - fx(x0))) ;
        v.push_back(x2) ;
        x0 = x1 ;
        x1 = x2 ; 
    }
    cout << nl ; 
    cout << "root = " << x2 ;
}
 
 int main(){
  // ahmed_nasser();
  ll t = 1 ;
  // cin >> t ;
  while(t--){
    ahmed() ;
  }

  return 0 ;
}