#include<bits/stdc++.h>
#include< string>
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

class node {
    public :
    string name ;
    double price ;
    node *next , *prev;
};

class double_link_list{
    private :
        node *first , *last ; 
        int index ;
         
    public :
    double_link_list(): first(NULL) , last(NULL) , index(0) {

    }  

    bool is_empty(){
        return first == NULL ;
    }

    void insert_front( string product , int pr){
        node *newnode = new node ;
        newnode ->name = product ;
        newnode -> price = pr ;
        newnode -> next = first ;
        newnode -> prev = NULL ;
        
        if ( is_empty()){
        last = newnode ; 
        }
        else {
        first -> prev = newnode ; 
        }

        first = newnode ;

    }
    void insert_back( string product , int pr){
        node *newnode = new node ;
        newnode ->name = product ;
        newnode -> price = pr ;
        newnode -> next = NULL ;
        newnode -> prev = last ;
        
        if ( is_empty()){
        first = newnode ; 
        }
        else {
        last -> next = newnode ; 
        }

        last = newnode ;

    }
    void display(){
        node *temp = first ;

        while ( temp != NULL){
            cout << temp -> name << " " << temp -> price << nl ;
            temp = temp -> next ;
        }
    }
    node * search ( string product){
        index = 0 ;
        node *temp = first ;
        while ( temp != NULL && temp -> name != product ){
            temp = temp -> next ;
            index++ ;
        } 
        if ( temp == NULL ){
            cout << "NOT FOUND " << nl ;
            return NULL ;
        } 
        else 
        return temp ;

    }
    void location(string product){
        if ( search(product) != NULL) 
        cout << index << nl ;
         
    }

    void remove(string product){
        if ( search(product) == NULL ) return ;
        
        node * del = search(product) ;
        if ( del -> prev == NULL && del -> next == NULL ){
            cout << "NOW , list is empty " << nl ;
        }
            
        
        else if ( del -> prev != NULL and del -> next != NULL  ){
        del -> prev -> next = del -> next ;
        del -> next -> prev = del -> prev ;
        }
        else if ( del -> prev == NULL ) {
            del -> next -> prev = NULL ;
            first = del -> next ;
        }
        else if ( del -> next == NULL ){
            del -> prev -> next = NULL ;
            last = del -> prev ;
        }

        delete del ;
    }
    void  modify(string product , double newprice ){
        if (search(product) == NULL ) return ;

        node *temp = search(product) ;
        temp -> price = newprice ;
    }
    int   bill ( string product ){
        
        node *temp = search(product) ;
        
        return temp -> price ;
        
    }

    
};
  
  
  int chose (){
    cout << " press 1 to modify " << nl ;
    cout << " press 2 to remove " << nl ;
    cout << " press 3 to extract the bill " << nl ;
    cout << " press 4 to display " << nl ;
    cout << " press 5 to find the location of product  " << nl ;
    cout << " press 6 to insert new product  " << nl ;
    cout << " press 0 to exit " << nl ;
    int choose ; cin >> choose ;
    return choose ;
  }
   
 void ahmed(){
    double_link_list lis ;
    string product ;
    int sum = 0 ; 
    double  price ; 
    
    cout << " hi , how many product do you want to insert " << nl ;
    int t ; cin >> t ;
    cout << " please enter your product and its price " << nl ;
    for ( int i = 0 ; i < t ; i++ ){
    cin >> product >> price  ;
    lis.insert_back(product,price) ;
    }

    int choose = chose() ;
    while ( choose != 0){
        string product ;
            double newprice ;
        if (choose == 1){
            cout << " please enter the product and its newprice " << nl ;
            cin >> product >> newprice ;
            lis.modify(product , newprice) ;
        }
        else if ( choose == 2){
            cout << "enter the product that you want to remove " << nl ;
            cin >> product ;
            lis.remove(product) ;
        } 
        else if ( choose == 3){
            cout << "how many product are bought  " << nl ;
            int t ; cin >> t ;
            for ( int i = 1 ; i <= t ; i++){
            cout << "enter product " << i << nl ;
            cin >> product ;
            sum += lis.bill(product) ;
            }
            cout << "bill = " << sum << nl ;
            sum = 0 ;
        }
        else if ( choose == 4){
            cout << "list = " << nl ;
            lis.display() ;
        }
        else if ( choose == 5){
            cout << "which product you want its location" << nl ;
            cin >> product ; 
            cout << "product location of " << product << " is ";
            lis.location(product) ;
            cout << nl ;
        }
        else if (choose == 6 ){
            cout << "how many product do you want to insert " << nl ;
            int t ; cin >> t ;
            cout << "please enter your product and its price " << nl ;
            for ( int i = 0 ; i < t ; i++ ){
            cin >> product >> price  ;
            lis.insert_back(product,price) ;
            }
        }
        


      choose =  chose() ;
    }
    cout << "prepared by eng : ahmed yasser & ahmed nasser" << nl ;
    cout << "thank you" << nl ;
    

 }
 
 int main(){
//   ahmed_nasser();
  ll t = 1 ;
   cin >> t ;
   vect
  while(t--){
    ahmed() ;
  }

  return 0 ;
}

