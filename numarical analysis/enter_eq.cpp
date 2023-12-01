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


 
void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
double which_one(string ) ;
void input() ;
double work (double , double ) ;

  vector < string > functions = {"", "sinx" , "cosx" , "tanx" , "cscx" , "secx" , "cotx" 
  , "x" , "ex" , "sinhx" , "coshx" , "tanhx" , "cschx" , "sechx" , "cothx" , "lnx" , "logx"} ;

  vector < char > opr ;
  vector < vector < double > > value ;
double fx(double x ){
  vector < double > result ;
  vector < char > opr1 ;
  double product ;
  int test = 0 ;
  for (int i = 0 ; i < opr.size() ; i++){
    
    if (opr[i] == '*' or opr[i] == '/'){
      if (opr[i] == '*')
      { 
        if ( test == 1 ) 
        product *= work(x , i + 1 ) ;
        else 
        product = work(x,i) * work(x,i+1) ;

        test = 1 ;
      }
      else {
       
         if ( test == 1 ) 
        product /= work(x , i + 1 ) ;
        else 
        product = work(x,i) / work(x,i+1) ;

        test = 1 ;
      }
        
      
    }
    else {
      opr1.push_back(opr[i]);
      if ( test == 1 ) 
      {
        result.push_back(product) ;
        test = 0 ;
      }
      else {
        result.push_back(work(x,i)) ;
      }
      
    }
  }
  double final_res = result[0] ;
  for (int i = 0 ; i < opr1.size()  ; i++){
    if (opr1[i] == '+'){
      final_res += result[i+1];

    }
    else if ( opr1[i] == '-'){
      final_res -= result[i+1] ;
    }
  }
  

  return final_res ;
}


 void ahmed(){
  cout << fixed(6) ;
  input() ;
  
 }
 
 int main(){
  ahmed_nasser();
  ll t = 1 ;
  // cin >> t ;
  while(t--){
    ahmed() ;
  }

  return 0 ;
}


  void input(){
    int tt = 0 ;
  double a = 1 , b = 1 ;
    string s , n =""  , m = "" , w="";        // n , m are first and second num , ex: asin(bx)
   getline(cin,s) ;
   for ( int i = 0 ; i < s.size() ; i++){
    if( s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '=' )
     {

      if (not n.empty() ) a = stod(n) ;

      if (not m.empty() ) b = stod(m) ;

      value.push_back({a , b , which_one(w)}) ; 
      
      a = 1 , b = 1 , w = "", n = "" , m = "" , tt = 0 ;  // initailise again 
      if ( s[i] == '+'){
      opr.push_back(s[i]) ;
      continue;
    }
    else if ( s[i] == '-'){
      opr.push_back(s[i]) ;
      continue;
    }
    else if ( s[i] == '*'){
      opr.push_back(s[i]) ;
      continue;
    }
    else if ( s[i] == '/'){
      opr.push_back(s[i]) ;
      continue;
    }
    else if ( s[i] == '='){
      opr.push_back(s[i]) ;
      break ;
    } 
  }

    if (s[i] == ' ') continue;

    if (isdigit(s[i]) and tt == 0){
      n += s[i] ;
    }
    
    if ( isalpha(s[i]) ) {
    tt = 1 ; 
    w += s[i] ;
   }

    if (isdigit(s[i]) and tt == 1){
      m += s[i] ;  
    }

   }
  for (int i = 0 ; i < value.size() ; i++){
    cout << value[i][0] << " " << value[i][1] << " " << value[i][2] << nl   ;
  }
  for (int i = 0 ; i < opr.size() ; i++ )
  cout << opr[i] << " " ; 
   
  }

  double which_one(string y ){
    for (int i = 0 ; i < functions.size() ; i++ ){
      if ( y == functions[i] ){
        return i ;
      }
    }
    return 0 ;
  }

  double work(double x , double indx){
  double res , a = value[indx][0] 
  , b = value[indx][1] 
  , c = value[indx][2] ;
  if (c == 0){
    res = a ;
  }
  else if (c == 1){
    res = a * sin( b * x ) ;
  }
  else if (c == 2){
    res = a * cos( b * x ) ;
  }
  else if (c == 3){
    res = a * tan( b * x ) ;
  }
  else if (c == 4){
    res = a * (1 / sin( b * x) );
  }
  else if (c == 5){
    res = a * (1 /  cos( b * x )) ;
  }
  else if (c == 6){
    res = a * (1 / tan( b * x )) ;
  }
  else if ( c == 7){
    res = a * pow ( x , b ) ;
  }
  else if (  c == 8 ){
    res = a * exp( b * x) ;
  }
  else if (c == 9){
    res = a * sinh(b * x) ;
  }
  else if (c == 10){
    res = a * cosh(b * x ) ;
  }
  else if (c == 11){
    res = a * tanh( b * x ) ;
  }
  else if (c == 12){
    res = a * (1 / sinh( b * x ) ) ;
  }
  else if (c == 13){
    res = a * (1 /  cosh( b * x )) ;
  }
  else if (c == 14){
    res = a * (1 / tanh( b * x )) ;
  }
  else if ( c == 15 ){
    res = a * log(b * x ) ;
  }
  else if ( c == 16 ){
    res = a * log10(b * x ) ;
  }

return res ;
}