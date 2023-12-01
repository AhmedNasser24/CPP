#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define pi  3.14159265358979323846
#define fixed(n) fixed << setprecision(n) 
#define fr(v,n) deque < ll > v(n) ; for(auto &i : v) cin >> i 
#define mod (ll)( 1e9 + 7) 


 
// void ahmed_nasser(){
//   ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//   #ifndef ONLINE_JUDGE   
//     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
//   #endif
// }
    double x0 , xn , n ;

    int menu(){
        cout << "please , choose from following menu : " << nl << nl  ;
        cout << "press 1 for trapazidal method" << nl ;
        cout << "press 2 for simpson method" << nl ;
        cout << "press 3 for simpson ( 3 / 8 ) method" << nl ;
        cout << "press 0 to exit " << nl ;
        int t ; 
        cin >> t ;
        return t ;
    }

    double fx(double x ){
    
     return 1 / ( x + 1) ; 
    }
  
 int main(){
    // ahmed_nasser();
    vector < double > y ;
    double h , sum ;
    cout << fixed(10) ;
    cout << "please , enter a and b " << nl ;
    cin >> x0 >> xn ;
    cout << "please , enter n " << nl ;
    cin >> n ;
    h = ( xn - x0) / n ;
    for ( double i = x0  ; i <= xn ; i += h){
        y.push_back( fx(i) ) ;
    }
    int sz = y.size() ;
    int choose = menu() ; 
  while ( choose ){
    // trapazidal method 
    if ( choose == 1 ){
         
        sum = y[0] + y[sz-1] ;
        for ( int i = 1 ; i < sz - 1 ; i++){
            sum += ( 2 * y[i] ) ;
        }          
        sum = ( h / 2) * sum ; 
        cout << "result by using trapazidal method =   " << sum << nl << nl ;
        }
        else if ( choose == 2 ){
        if ( int(n) % 2 ) {
            cout << "not valid , n must be even" << nl << nl ;
        }
        else {
        sum = y[0] + y[sz - 1] ;
        for (int  i = 1 ; i < sz - 1 ; i++){
            if ( i % 2 ) 
            sum += (4 * y[i]) ;
            else 
            sum += (2 * y[i]) ;
        }
        sum = ( h / 3 ) * sum ;
        cout << "result by using simpson method =   " << sum << nl << nl ; 
        }
        }
        else if ( choose == 3 ){
            if ( int(n) % 3 ){
            cout << "not valid , n must be divisable by 3" << nl << nl ;
            }
            else {
            sum = y[0] + y[sz - 1] ;
            for (int  i = 1 ; i < sz - 1 ; i++){
                if ( i % 3 ) 
                sum += (3 * y[i]) ;
                else 
                sum += (2 * y[i]) ;
            }
            sum = ( (3 * h) / 8 ) * sum ;
            cout << "result by using simpson (3 / 8 ) method =   " << sum << nl << nl ;
            }
        }
        else 
        cout << "not in the menu" << nl << nl ;  
        choose = menu() ;   
    }
  
    cout << "thank you DR moanis "<< nl ; 
    
  return 0 ;
}

