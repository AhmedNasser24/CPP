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
void swap(int &x, int &y){
    int t = x ;
    x = y ;
    y = t ;
}

 void ahmed(){
    // int x = 3  ;
    // int *pt ;
    // pt = &x ;
    // cout << pt << nl ;
    // cout << *pt << nl ;
    // *pt += 4;
    // cout << x << nl ;
    // cout << *pt << nl ;
    //___________________________________________________

    int arr[] = {1,3,5} ;
    int *pt ;
    pt = arr ; // array consider a static pointer which point to only first address
    for ( int i = 0 ; i < 1 ; i++){
        cout << *( arr + i ) << nl ;
        cout << *( pt + i ) << nl ;
        cout << ( pt + i ) << nl ;
        cout << pt[i] << nl ;
    }
    
    //  pt++ ;
    // *pt = 2 ;
    // for ( int i = 0 ; i < 3 ; i++){
    //     cout << *( arr + i ) << nl ;
    // }

    //_____________________________________________________

    // int x = 5 , y = 3 ;
    // cout << x << " " << y << nl ;
    // swap( x , y) ;
    // cout << x << " " << y  ;
    //_______________________________

    // int x ;
    // float *p ;
    // cin >> x ;
    // p = new float[x] ;
    

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