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
  #define Lmax LLONG_MAX
  #define all(vec) vec.begin(), vec.end()
  #define put(y) return void(cout << y << nl)
  #define sz(r) int(r.size())
  #define pi 3.14159265358979323846
  #define fixed(n) fixed << setprecision(n)
  #define fr(v, n)    \
    deque<ll> v(n);   \
    for (auto &i : v) \
    cin >> i
  #define frs(v, n)     \
    deque<string> v(n); \
    for (auto &i : v)   \
    cin >> i
  #define mod (ll)(1e9 + 7)
  #define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " secs\n";
  #define cin_2d(vec, n, m)                           \
    for (int i = 0; i < n; i++)                       \
      for (int j = 0; j < m && cin >> vec[i][j]; j++) \
        ;
  #define cout_2d(vec, n, m)                                  \
    for (int i = 0; i < n; i++, cout << "\n")                 \
      for (int j = 0; j < m && cout << vec[i][j] << " "; j++) \
        ;
  #define fill(vec, value) memset(vec, value, sizeof(vec));
  #define add_mod(a, b, m) (((a % m) + (b % m)) % m)
  #define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
  #define mul_mod(a, b, m) (((a % m) * (b % m)) % m)

  template <typename T = int>
  istream &operator>>(istream &in, vector<T> &v)
  {
    for (auto &x : v)
      in >> x;
    return in;
  }

  template <typename T = int>
  ostream &operator<<(ostream &out, const vector<T> &v)
  {
    for (const T &x : v)
      out << x << ' ';
    return out;
  }
  template <typename T, int base = 1>
  struct DSU
  {
    vector<T> parent, Gsize;
    DSU(int MaxNodes)
    {
      parent = Gsize = vector<T>(MaxNodes + 5);
      for (int i = base; i <= MaxNodes; i++)
      {
        parent[i] = i, Gsize[i] = 1;
      }
    }
    // O(log(n)) 
    T find_leader(int node)
    {
      return parent[node] = (parent[node] == node ? node : find_leader(parent[node]));
    }

    bool is_same_set(int u, int v)
    {
      return parent[u] == parent[v];
    }

    void union_set(int u , int v){
      int leader_u = find_leader(u) , leader_v = find_leader(v) ;
      if ( leader_u == leader_v) return ;
      if (leader_u < leader_u )
        swap(leader_u , leader_v) ;

      parent[leader_v] =  leader_u;
      Gsize[leader_u] += Gsize[leader_v] ;
    }

    int get_size( int u ){
      return Gsize[find_leader(u)] ;
    }
  };

  void ahmed_nasser()
  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
  }

  void ahmed()
  {
  }

  int main()
  {
    ahmed_nasser();
    ll t = 1;
    // cin >> t ;
    while (t--)
    {
      ahmed();
      return 0;
    }
  }  
