#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define pi  3.14159265358979323846
#define fixed(n) fixed << setprecision(n) ;


  int menu(){
    cout << "choose from following menu : " << nl << nl ;
    cout << "press 1 for using lagranch method " << nl ;
    cout << "press 2 for using newton forward method" << nl ;
    cout << "press 3 for using newton backward method" << nl ;
    cout << "press 0 to exit" << nl ;
    int d ;
    cin >> d ;
    return d ;
  }
  
 int main(){
    cout << fixed(10) ;
cout << "this program is to process la granch , newton forward or backward method \n";

  cout << "please ,enter number of points :  " << nl  ;
    int n ; cin >> n ;
    cout << "enter all value of x : \n" ; 
    vector < double > x1(n) ;
    for (auto &i : x1 ) cin >> i ;
    cout << "enter all value of y : \n" ; 
    vector < double > y1(n) ;
    for ( auto &i : y1) cin >> i ;
    cout << "if you want to enter value of x to get value of y press 1 \n" ;
    cout << "if you want to enter value of y to get x press 2 \n" ;
    int t ; cin >> t ;
    double x = 0, y = 0  ;
    if ( t == 1 ) {
        cout << "enter x = \n" ;
        cin >> x ;
    }
    else {
        cout << "enter y = \n" ;
        cin >> y ;
        swap (x1 , y1) ;
        swap (x , y ) ;
    }

    
    int cnt = 1 , m = n  ;
    vector < double > forward_newton = y1 ;
    deque < double > back_newton;
    back_newton.push_front(y1[n-1]) ;
        while (m--){ 
            for ( int i = n - 1 ; i - cnt >= 0 ; i--){
                forward_newton[i] = (forward_newton[i] - forward_newton[i-1]) / (x1[i] - x1[i-cnt] ) ;
                if ( i == n - 1)
                back_newton.push_front( forward_newton[i]) ;
            }
            cnt++ ;
        }
    int d ;
    d = menu() ;
    while(d) {
        y = 0 ;     
        if (d == 1 ){
        double num = 1 , den = 1 ; 
        for ( int i = 0 ; i < n ; i++ ){
        den = 1 , num = 1 ;
        for ( int j = 0 ; j < n ; j++){
            if ( j == i ) continue;
            num *= (x - x1[j]) ;
            den *= (x1[i] - x1[j]) ;
        }
        y += (num / den ) * y1[i] ;
    }
    if ( t == 1)
    cout << "at x = " << x << ", y = " << y << nl  ;
    else 
    cout << "at y = " << x << ", x = " << y << nl ;
     }
 
    else if ( d == 2){
        double product = 1 , res = 0  ;
        for (int i = 0 ; i < n ;i++){
            product = 1 ;
            for ( int j = 0 ; j < i ; j++){
                product *= (x - x1[j]);
            }
            y += (forward_newton[i] * product) ;
        }
        if ( t == 1 )
        cout << "at x = " << x << " , y = " << y << nl ;
        else if ( t == 2 ){
            
            cout << "at y = " << x << " , x = " << y << nl  ;
        }
    }
        else if ( d == 3 ){
            double  product = 1 ;
            for ( int i = n - 1 ; i >= 0 ; i--){
                product = 1 ;
                for ( int j = n-1 ; j > i ; j--){
                    product *= (x - x1[j]) ;
                }
                y += (back_newton[i] * product) ;
            }
            if ( t == 1 )
            cout << "at x = " << x << " , y = " << y << nl ;
            else if ( t == 2 ){
            
            cout << "at y = " << x << " , x = " << y << nl ;
            }
        }
        cout << nl ;
        d = menu() ;
    }
    cout << nl ;
    cout << "thank you DR moanis" << nl ;
    cout << nl ;
    
  return 0 ;
}

