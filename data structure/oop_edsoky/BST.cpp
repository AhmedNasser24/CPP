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


 
void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
  class node{
    public:
    int data ;
    node *left , *right ;
    node(int item ){
        data = item ;
        right =left = NULL ;
    }
  };
  class BST{
    public:
    node *root ;
    BST(){
        root = NULL;
    }
    node * insert(node *r , int item ){
        if (r == NULL){
            node *newnode = new node(item);
            r = newnode ;
        }
        else if( item < r ->data){
            r->left = insert(r->left , item) ;
        }
        else if (item >= r ->data){
            r->right = insert(r->right , item) ;
        }
        return r ;
    }
    void insert(int item ){
        root = insert(root , item) ;
    }
    void preorder( node *r){
        if (r == NULL)
        return ;

        cout << r->data << " " ;
        preorder(r->left) ;
        preorder(r->right) ;
    }
    void inorder(node *r){
        if (r == NULL)
        return ;

        inorder(r->left) ;
        cout << r ->data << " " ;
        inorder(r->right) ;
    }
    void postorder(node *r){
        if (r == NULL) return ;

        postorder(r->left) ;
        postorder(r->right) ;
        cout << r->data << " " ;
    }
    node *minitem(node *r){
        if (r == NULL)
        return NULL ;
        else if ( r -> left == NULL)
            return r ;
        else
            return minitem(r->left) ;
        }
    node *mx_item (node*r){
        if ( r == NULL)
        return NULL ;
        else if ( r ->right == NULL)
        return r ;
        else 
        return mx_item(r -> right ) ;
    }    
    node *Delete(node *r , int item){
        if ( r == NULL){
            return NULL ;
        }
        else if ( item < r->data ){
            r ->left = Delete(r->left , item) ;
        }
        else if ( item > r->data ){
            r ->right = Delete(r->right , item) ;
        }
        else if ( item == r->data){
            if ( r->left == NULL && r->right == NULL)
                r = NULL ;
            else if ( r->left != NULL && r->right == NULL){
                
                r = r -> left ;
            } 
            else if (r->left == NULL && r->right != NULL){
                
                r = r ->right ;
            }
            else if (r->left != NULL && r->right != NULL){
                node *mx = mx_item( r ->left) ;
                r -> data = mx->data ;
                r ->left = Delete(r->left , mx->data) ;

            }   
        }
        return r ;
    }
  };
  
 void ahmed(){
  BST b;
  b.insert(45) ;
  b.insert(15) ;
  b.insert(10) ;
  b.insert(20) ;
  b.insert(12) ;
  b.insert(11) ;
  b.insert(79) ;
  b.insert(55) ;
  b.insert(50) ;
  b.insert(49) ;
  b.insert(90) ;
b.Delete(b.root , 79) ;
b.Delete(b.root , 55) ;
b.Delete(b.root , 50) ;
b.Delete(b.root , 49) ;
b.Delete(b.root , 15) ;
b.Delete(b.root , 11) ;
  b.inorder(b.root) ;
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

