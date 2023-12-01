#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define fixed(n) fixed << setprecision(n) ;


 
  int menu(){
    int choose ; 
    cout << "choose from following menu :" << nl << nl ;
    cout << "press 1 for using by section method" << nl ;
    cout << "press 2 for using  secant method" << nl ;
    cout << "press 0 to exit " << nl ;
    cin >> choose ;
    return choose ;
  }
  double fx(double x){
    return pow(x,2) - x - 3 ;
  }

 
 int main(){
    cout << fixed(6) ;
    cout << pow(-3 , 2) << nl ;
    double a , b , c , x0 , x1 , x2 ;
    cout << "Hello DR MOANIS , this program implement by section method and secant method" << nl ;
     cout << "press 1 to get positive root and 2 to get negative root" << nl ;
     int k ; cin >> k ; 
     if ( k == 2 ) k = -1 ; 

    if (fx(0) > 0 ){
        for ( int i = 1 * k ; ; i += k ){
            if ( fx(i) < 0) {
            a = i - k ;
            b = i ;
            c = ( a + b) / 2 ;
            break ;
            }
        }
    }
    else if (fx(0) < 0 ){
        for ( int i = 1 * k ; ; i += k){
            if ( fx(i) > 0) {
            a = i - k ;
            b = i ;
            c = ( a + b) / 2 ;
            break ;
            }
        }
    }
    cout << "intervel time : [ " << a << " , " << b << " ]\n" ;
    x0 = a ; 
    x1 = b ;
  //------------------------------------ by section method ----------------------------------------------- 

    if (fx(0) < 0){
      for ( int i = 0 ; i < 10 ; i++){
        if(fx(c) < 0){
          a = c ; 
          c = (a+b) / 2 ;
        }
        else if ( fx(c) > 0 ){
          b = c ;
          c = ( a + b ) / 2 ;
        }
      }
    }
    else if (fx(0) > 0){
      for ( int i = 0 ; i < 9 ; i++){
        if(fx(c) > 0){
          a = c ; 
          c = (a+b) / 2 ;

        }
        else if ( fx(c) < 0 ){
          b = c ;
          c = ( a + b ) / 2 ;

        }
      }
    }
// --------------------------------------- secant method -------------------------------------------------------------
    

    
    vector < double > v ;
 v.push_back(x1) ;
    for ( int i = 0 ; i < 100 ; i++) {
        if ( fx(x1) - fx(x0) == 0 or x1 - x0 == 0 ) break ;
        x2 = x1 - (( fx(x1) * (x1 - x0))/( fx(x1) - fx(x0))) ;
        v.push_back(x2) ;
        x0 = x1 ;
        x1 = x2 ; 
    }
    int choose = menu() ;
    while (choose){
      if (choose == 1)
      cout << "root =  " << c << nl ; 
      else if (choose == 2 )
      cout << "root =  " << x2 << nl ;

      choose = menu() ;
      cout << nl ;
}

cout << "thank you DR MOANIS "<< nl ;
  return 0 ;
}
