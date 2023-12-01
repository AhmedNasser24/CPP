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
  class arr {
    private :
        
        int *ptr ;
    public :
    int size , length ;
        arr (int s ) : size(s) , length(0) {
            ptr = new int[s] ;
        }
        void creat(int s){
            size = s ;
            ptr = new int[s] ;
            length = 0 ; 
        }
        int getlength(){
            return length ;
        }
        void pushback(int value){
            if (length >= size ){
                cout << "filled " << nl ;
                return ; 
            }
            ptr[length] = value ;
            length++ ;

        }
        void insert(int pos , int value ){
            if (length >= size ){
                cout << "filled " << nl ;
                return ;
            }
            for ( int i = length ; i >= pos ; i-- ){
                ptr[i] = ptr[i-1] ;
            }
            ptr[pos - 1 ] = value ;
            length++ ; 
        }
        void del(int value){
            int i = 0 ; 
            for ( i ; i < length ; i++){
                if (ptr[i] == value ) break ;
            }
            if ( i == length) {
                cout << "not found" << nl ;
                return ;
            }
            for ( i ; i < length - 1 ; i++){
                ptr[i] = ptr[i+1] ;
            }
            length-- ;
        }
        void merg(arr other ){
            int newsize = size + other.size ;
            size = newsize ;
            int *old = ptr ;
            ptr = new int[size] ;
            int i = 0; 
            for ( i ; i < length ; i++){
                ptr[i] = old[i] ; 
            }
            delete []old ;
            int j = i ; 
            for ( int i = 0 ; i < other.length ; i++){
                ptr[j] = other.ptr[i] ;
                j++ ;
                length++ ;
            }
        }
        void display(){
            for ( int i = 0 ; i < length ; i++){
                cout << ptr[i] << " " ; 
            }
            cout << nl ; 
        }
  };
  
 void ahmed(){
    
    
    // for ( int i = 1 ; i < 5 ; i++)
    // arrt.pushback(i) ;
    // arrt.insert(1 , 10) ;
    // arrt.display() ;
    // arr *pt ;
    // pt->creat(5) ;
    // pt->pushback(7);
    // pt->pushback(6);
    // pt->pushback(5);
    // pt->pushback(4);
    // pt->display() ;
   
    arr arrt(8) ;
    int i ; 
    for (  i = 1 ; i < 5 ; i++)
    arrt.pushback(i) ;
    // arrt.insert(1 , 10) ;
    // arrt.del(2) ;
    arrt.display() ;
    arr uu(7) ; 
    for (  i = 5 ; i < 10 ; i++)
    uu.pushback(i) ;
    uu.display() ;
    uu.merg(arrt) ;
    uu.display() ;
    cout << uu.size << nl ;
    cout << uu.length << nl ;
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

