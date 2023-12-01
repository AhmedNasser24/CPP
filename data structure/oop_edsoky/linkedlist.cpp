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


 
void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
    class node
    {
    public:
        int data ;
        node *next ;
    };
    
    class linkedlist{
        public :
            node *head ;
         
            linkedlist (){
                head = NULL ;
            }
            bool isempty (){
                return head == NULL ;
            }
            bool isfound(int value ){
                node *temp = head ;
                while ( temp != NULL ){
                    if (temp->data == value )
                    return true ;
                    temp = temp -> next ;
                }
                return false ;
            }
            void insertfirst( int newvalue){
                node *newnode = new node ; 
                newnode -> data = newvalue ;
                
                newnode -> next = head ;
                head = newnode ; 
                 
            }
            void insertbefore( int item , int newvalue ){
                // if not found insert first 
                if ( !isfound(item)) insertfirst(newvalue) ; 

                else {
                    node*newnode = new node ;
                    node *temp = head ;
                    newnode ->data = newvalue ;
                    // if item is first one 
                    if ( temp -> data == item ) {
                    newnode -> next = head  ;
                    head  = newnode ; 
                    }
                    // if item is not first ;
                    else {
                    while ( temp-> next != NULL && temp -> next -> data != item){
                        temp = temp -> next ;
                    } 
                    newnode -> next = temp -> next ;
                    temp -> next = newnode ;
                    } 
                }

            }
            void append(int newvalue ){
                node *temp = head ;
                node *newnode = new node ;
                if ( isempty())
                {
                    insertfirst(newvalue) ;
                    return ;
                }
                while (temp -> next != NULL){
                    temp = temp ->next ;
                }
                temp -> next = newnode ;
                newnode ->data = newvalue ;
                newnode -> next = NULL ; 
            }
            void del (int value ){
                // check if found 
                if (!isfound(value)) return ;
                // to delete first element 
                if (head -> data == value ){
                    node *delptr = head ;
                    head = head -> next ;
                    delete delptr ;
                    return ;
                }
                // to delete rest element 
                node *delptr = head ; 
                node *prev = NULL ;
                while ( delptr -> data != value ){
                    prev = delptr ;
                    delptr = delptr -> next ;
                }
                prev -> next = delptr -> next ;
                delete delptr ; 
            }

            void display(){
                node *temp = head ;
                while ( temp != NULL ){
                    cout << temp ->data << " " ;
                    temp = temp -> next ; 
                }
                cout << nl ;
            }
    };
  
 void ahmed(){
  linkedlist ls ;
 
  
  ls.insertfirst(8) ;
   ls.insertfirst(7) ;
  ls.insertfirst(4) ;
  ls.insertbefore( 17 , 88 ) ;
  ls.append(100) ;
//   ls.del(88) ;
//   ls.del(7) ;
  ls.display() ;

  
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

