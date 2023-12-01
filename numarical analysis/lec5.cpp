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
  vector < double > eq1(3) , eq2(3) ;
  double A , B ;
  void AB(){
    double mul1 = eq2[1] , mul2 = eq1[1] ; 
    for ( int i = 0 ; i < 3 ; i++){
      eq1[i] *= mul1 ;
      eq2[i] *= mul2 ;
    }
    
    cout << nl ;
    vector < double > res(3) ;
    for ( int i = 0 ; i < 3 ; i++){
      res[i] = eq1[i] - eq2[i] ; 
    }
     A = res[0] / res[2] ;
     B = (eq1[0] - (eq1[2] * A)) / eq1[1] ;
  }
  
 void ahmed(){
  cout << fixed(7) ;
  cout << "enter number of point " << nl ;
  double n , a , b ; cin >> n ;
    vector < double > x , y ;
    for ( int i = 0 ; i < n ; i++){
      cout << "enter x" << i << nl ;
      cin >> a ;
      x.push_back(a) ;
      cout << "enter y" << i << nl ;
      cin >> b ; 
      y.push_back(b) ;
    }

    //--------------------------------fit to exp---------------------------
    for ( int i = 0 ; i < n ; i++){
      y[i] = log(y[i]) ;
    }
    double sum_x = 0 , sum_y = 0  , sum_xy = 0 , sum_x2 = 0 ;
    for ( int i = 0 ; i < n ; i++){
      sum_x += x[i] ;
      sum_y += y[i] ;
      sum_xy += x[i] * y[i] ;
      sum_x2 += pow(x[i] , 2) ;
    }
    
    eq1[0] = sum_y ;
    eq1[1] = sum_x ;
    eq1[2] = n ;
    eq2[0] = sum_xy ;
    eq2[1] = sum_x2 ;
    eq2[2] = sum_x ;

    
    AB() ;

    a = exp(A) , b = B ;
    cout << "fit to a * e^(b*X)" << nl ;
    
    cout << "equation =\t" << a << " * e^( " << b << "X )" << nl ; 
    cout << nl ;
    //------------------------to fit a*b^x-----------------------  
    cout << "to fit a * b^(x) " << nl ;
    b = exp(B) ; 
    
    cout << "equation =\t" << a << " * " << b << "^( X )" << nl ; 
    cout << nl ;


    //------------------------to fit a*x^b-----------------------  

    sum_x = 0 ;
    for ( int i = 0 ; i < n ;i++){
      x[i] = log(x[i]) ;
      sum_x += x[i] ;
    }
    eq1[1] = sum_x ;
    eq2[2] = sum_x ;
    AB() ;
    b = B ;
    a = exp(A) ; 
    cout << "to fit a * x^(b)" << nl ;
    cout << "equation =\t" << a << " * X ^ ( " << b << " )"  << nl ; 
    cout << nl ;


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

