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
  class node{
    public :
    node *next ;
    int data ;
  };
  class staack{
    private :
    node *top ;
    int length ;  
    public :
    staack(): top(NULL) , length(0){}

    bool is_empty(){
        return top == NULL ;
    }
    int count(){
      return length ;
    }
    void push(int item ){
        length++ ;
        node *newnode = new node() ;
        newnode ->data = item ;
        newnode -> next = top ;
        top = newnode ;
        
    }
    void pop(){
      if (is_empty()) return ;

      node *del = top ;
      top = top -> next ;
      delete del ;
    }
    void display(){
      node *temp = top ; 
      while ( temp != NULL){
        cout << temp->data << " " ;
        temp = temp -> next ;
      }
    }
    int top_value(){
      return top -> data ;
    }
    bool is_find(int item){
      node *temp = top ; 
      while ( temp != NULL && temp -> data != item  ){
        temp = temp -> next ;
      }
      return temp != NULL ;
    }

  };
    
//  void ahmed(){
//   staack st ;
//   // cout << " how many items do you want to enter ?  " << nl ;
//   // int t ; 
//   // cin >> t ;
//   for ( int i = 0 ; i < 5 ; i++ )
//   {
//     // int x ; cin >> x ;
//     st.push(i) ;
//   }
//   st.pop() ;
//   st.pop() ;
// st.display() ;
// cout << st.is_find(0) << nl ;
//   // cout << st.count() ;
//  }
 
//  int main(){
//   //ahmed_nasser();
//   ll t = 1 ;
//   // cin >> t ;
//   while(t--){
//     ahmed() ;
//   }

//   return 0 ;
// }

