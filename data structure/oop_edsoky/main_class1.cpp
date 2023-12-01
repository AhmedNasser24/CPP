#include<bits/stdc++.h>
#include "class1.cpp"
#include "shape.cpp"
//#include "rec.cpp"
//#include "inhiretance.cpp"
using namespace std;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 



 
void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}


 void ahmed(){
  
  student c("ahmed" , 3) ;
  // student c("ahmed" , 3.6) ;
  // c = c - c ;
 c = c + c + c * c ;
  c.print() ;
  
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