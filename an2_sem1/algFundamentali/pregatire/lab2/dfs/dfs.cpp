#include <iostream>
#include <fstream>
#include <vector>
#include <fstream>

using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");

void dfs(int s, vector<int>& vis, vector<vector<int>>& adj){

  vis[s] = 1;
  for(auto v : adj[s]){
    if(vis[v] == 0){
      dfs(v, vis, adj);
    }
  }

}

int main(){

  int n, m;
  fin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> vis(n, 0);
  for(int i = 0; i < m; i++){
    int st,dr;
    fin>>st>>dr;
    adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }
  int sum = 0;
  for(int i = 0; i < n; i++){
    if(vis[i] == 0){
      dfs(i, vis, adj);
      sum++;
    }
  }
  fout<<sum<<endl;

  return 0;
}
