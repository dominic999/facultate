#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream fin("ma.in");

int idx = 0;
void dfs(int s, 
    vector<vector<int>>& adj, 
    vector<int>& vis, 
    vector<int>& minim, 
    vector<int>& desc, 
    int p, 
    vector<int>& critici
){
  vis[s] = 1;
  desc[s] = minim[s] = ++idx;
  int copii = 0;
  for(auto x : adj[s]){
    if(x == p) continue;
    if(vis[x] == 0){
      copii++;
      dfs(x, adj, vis, minim, desc, s, critici);
      if(minim[x] >= desc[s] && p != -1){
        critici[s] = 1;
      }
      minim[s] = min(minim[s], minim[x]);
    }else{
      if(desc[x] < minim[s] || minim[s] == -1){
        minim[s] = desc[x];
      }
    }
  }
  if(p == -1 && copii >= 2){
    critici[s] = 1;
  }
}

int main(){
  int n, m;
  while(cin>>n>>m && (n != 0 && m != 0)){
    vector<vector<int>> adj(n);
    vector<int> vis(n, 0);
    vector<int> critici(n, 0);
    vector<int> minim(n, -1);
    vector<int> desc(n, 0);

    for(int i = 0; i < m; i++){
      int st, dr;
      cin>>st>>dr;
      adj[st-1].push_back(dr-1);
      adj[dr-1].push_back(st-1);
    }
    dfs(0, adj, vis, minim, desc, -1, critici);
    int sum  = 0;
    for(auto x : critici){
      if(x == 1){
        sum++;
      }
    }
    cout<<sum<<endl;
    idx = 0;

  };


  return 0;
}
