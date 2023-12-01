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


 

  
  double fx(double x ,double y){
    return x + y + 0.5 ;
  }
 void ahmed(){
    cout << fixed(10) ;
    double x0 , y0 , h , a , b ;
    cout << "fx(x0) = y0 , please enter x0 and y0 :" << nl ;
    cin >> x0 >> y0 ;
    cout << "please , enter interval : " << nl ; 
    cin >> a >> b ;
    cout << "please , enter step " << nl ;
    cin >> h ;
    vector < double > x , y ;
    for ( double k = x0 ; k <= b ; k += h )
    x.push_back(k) ;

    y.push_back(y0);
    int i ; 
    for ( i = 1 ; i < x.size() ; i++){
        y.push_back(y[i-1] + h * fx(x[i-1] , y[i-1])) ;
    }

    //------------------------------------------------------------
    // modified oylar 

    vector < double > ye1 , yi ;
    yi.push_back(y0) ;
    for ( i = 0 ; i < x.size() ; i++){
       if(i != x.size() - 1) {ye1.push_back(yi[i] + h * fx(x[i],yi[i])) ; }
       if(i) yi.push_back( yi[i-1] + (h / 2 ) * abs(fx(x[i-1],yi[i-1]) + fx(x[i] , ye1[i-1] ))) ;
    }
    i-- ;
    cout << nl ;
    cout << "by using modified  method : " << nl ;
    cout << "at x = " << x[i] << ", y = " << y[i] << nl ;
    cout << nl ;
    cout << "by using modified oylar method : " << nl ;
    cout << "at x = " << x[i] << " , y = " << yi[i] << nl ;
 }
 
 int main(){
  
  ll t = 1 ;
  // cin >> t ;
  while(t--){
    ahmed() ;
  }

  return 0 ;
}

