// #include<bits/stdc++.h>
#include "stack.cpp"
// using namespace std;
// #define ll long long 
// #define nl "\n"
// #define oo INT_MAX 
// #define all(vec) vec.begin() , vec.end()
// #define put(y) return void(cout << y << nl )
// #define sz(r) int(r.size())
// #define pi  3.14159265358979323846
// #define fixed(n) fixed << setprecision(n) 
// #define fr(v,n) deque < ll > v(n) ; for(auto &i : v) cin >> i 
// #define mod (ll)( 1e9 + 7) 


 
// void ahmed_nasser(){
//   ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
//   #ifndef ONLINE_JUDGE   
//     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
//   #endif
// }
  
 class que{
    private :
    node *top ;
    node *last ;
    int length ; 
    public :
    que():top(NULL) , last(NULL) , length(0){}
    bool is_empty(){
      return top == NULL ;
    }
    void push(int item ){
      length++ ;
      node *newnode = new node ;
      newnode -> data = item ;
      if (is_empty()){
        top = last = newnode ;
        newnode ->next = NULL ;
        return ;
      }

      last -> next = newnode ;
      newnode -> next = NULL ;
      last = newnode ;
      
    }
    void pop(){
      if (is_empty()) return ;
      node *del = top ;
      top = top ->next ;
      delete del ;
      length-- ;

    }
    void display(){
      node *temp = top ;
      while ( temp != NULL){
        cout << temp -> data << " " ; 
        temp = temp -> next ;
      }
      cout << nl ;
    }
    int count(){
      return length ;
    }
    void clear(){
      while (top != NULL){
        node *del = top ;
        top = top -> next ;
        delete del ;
      }
      length = 0 ;
    }
    int top_value(){
      if (!is_empty())
      return top -> data ;

      cout << "queue is empty :" ;
      return -1 ;
    }
 
 }; 
 void ahmed(){
  que q ;
  for ( int i = 0 ; i < 10 ; i++){
    q.push(i) ; 
  }
  q.display() ;
  q.pop() ; 
  q.pop() ; 
  
  q.display() ;
  q.clear() ; 
  q.display() ; 
  cout << q.top_value() << nl ;
  cout << q.count() << nl ;
 }
 
 int main(){
//  ahmed_nasser();
  ll t = 1 ;
  // cin >> t ;
  while(t--){
    ahmed() ;
  }

  return 0 ;
}

