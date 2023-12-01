#include<bits/stdc++.h>
#include "productionworker.h"
using namespace std;

void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 void ahmed(){
  productionworker cc ;
  cc.display() ;
  cout << "_________________________________\n\n" ;
  productionworker ff("ahmed" , "01066505898" , "22/4/2022" , 1 , 20.5) ;
  ff.display() ;  
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