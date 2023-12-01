#include <bits/stdc++.h>
using namespace std;


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