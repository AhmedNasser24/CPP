#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename K, typename V, typename Comp = std::less<K>>
using ordered_map = tree<K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename Comp = std::less<K>>
using ordered_set = ordered_map<K, null_type, Comp>;

template <typename K, typename V, typename Comp = std::less_equal<K>>
using ordered_multimap = tree<K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename Comp = std::less_equal<K>>
using ordered_multiset = ordered_multimap<K, null_type, Comp>;
#define ll long long 
#define nl "\n"
#define oo INT_MAX 
#define all(vec) vec.begin() , vec.end()
#define put(y) return void(cout << y << nl )
#define sz(r) int(r.size())
#define pi  3.14159265358979323846
#define fixed(n) fixed << setprecision(n) 
#define fr(v,n) deque < ll > v(n) ; for(auto &i : v) cin >> i 
#define frs(v,n) deque < string > v(n) ; for(auto &i : v) cin >> i 
#define mod (ll)( 1e9 + 7) 
#define Time cerr << "Time Taken: " << (float)clock()/CLOCKS_PER_SEC << " secs\n";
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)

 
void ahmed_nasser(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

struct car {
  string name ; 
  int maxspeed ;
  car(string n = "ff" , int m = 0 ) : name(n) , maxspeed(m){} ;
}h("ti=iyit" , 80);
  
 void ahmed(){
  car c = {"kia" , 59} ;
  cout << c.maxspeed << nl ;
  h = {"hhh" , 100} ;
  cout << h.name << nl ;
  }
 
 int main(){
  ahmed_nasser();
  ll t = 1 ;
  //cin >> t ;
  while(t--){
    ahmed() ;
  }

  return 0 ;
}
