#include <iostream>
#include <vector>
#include <fstream>
#include <queue>

using namespace std;
ifstream fin("berarii2.in");
ofstream fout("berarii2.out");


void bfs(vector<vector<int>>& adj, int  s, vector<int>& viz, int n){

  queue<int> coada;
  viz[s] = 1;
  coada.push(s);
  while(!coada.empty()){
    int u = coada.front();
    coada.pop();
    for (auto v : adj[u]){
      if(viz[v] == 0){
        coada.push(v);
        viz[v] = 1;
      }
    }
  }

}


int main(){

  int n,m,p;
  fin>>n>>m>>p;
  vector<vector<int>> adj(n);
  vector<int> surse;
  // vector<int> d(n, -1);
  vector<int> viz(n, 0);

  for(int i = 0; i < m; i++){
    int st,dr;
    fin>>st>>dr;
    // adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }

  for(int i = 0; i < p; i++){
    int x;
    fin>>x;
    surse.push_back(x-1);
  }

  for(auto x : surse){
    if(viz[x] == 0){
      bfs(adj, x, viz, n);
    }
  }

  int sum = 0;
  vector<int> neviz;
  for(int i = 0; i < n; i++){
    if(viz[i] == 0){
      sum++;
      neviz.push_back(i+1);
    }
  }
  fout<<sum;
  for(auto x : neviz){
    fout<<endl;
    fout<<x;
  }

  return 0;
}
