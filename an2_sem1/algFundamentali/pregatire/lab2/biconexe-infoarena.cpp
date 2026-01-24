#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
ifstream fin("ma.in");

int idx = 0;
stack<pair<int,int>> muchii;
vector<vector<pair<int,int>>> biconexe;

void dfs(int s, 
    vector<vector<int>>& adj, 
    vector<int>& vis, 
    vector<int>& minim, 
    vector<int>& desc, 
){
  vis[s] = 1;
  desc[s] = minim[s] = ++idx;
  int copii = 0;
  for(auto x : adj[s]){
    if(x == p) continue;
    if(vis[x] == 0){
      copii++;
      muchii.push({s, x});
      dfs(x, adj, vis, minim, desc);
      minim[s] = min(minim[s], minim[x]);
      if(minim[x] >= desc[s]){
        biconexe.push_back({});
        while(muchii.top().first != s && muchii.top().second != x){
          biconexe.back().push_back(muchii.top());
          muchii.pop();
        }
        biconexe.back().push_back(muchii.top());
        muchii.pop();
      }
    }else{
      if(desc[x] < minim[s] || minim[s] == -1){
        minim[s] = desc[x];
        muchii.push({s,x});
      }
    }
  }
}

int main(){

  int n,m;
  cin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> vis(n, 0);
  vector<int> minim(n, -1);
  vector<int> desc(n, 0);

  for (int i = 0 ; i < m; i++){
    int st,dr;
    cin>>st>>dr;
    adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }

  for(int i = 0; i < n; i++){
    if(vis[i] == 0){
      dfs(i, adj, vis, minim, desc);
    }
  }

  return 0;
}
