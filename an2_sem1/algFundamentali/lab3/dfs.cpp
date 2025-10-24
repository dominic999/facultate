#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

ifstream fin("dfs.in");
ofstream fout("dfs.out");

void dfs(int nod, vector<vector<int>> &vecini, vector<int> &vis){
  vis[nod] = 1;
  for (auto x: vecini[nod]){
    if(vis[x] == 0){
      dfs(x, vecini, vis);
    }
  }
}

int main(){

  int N, M;
  int nr=0;
  vector<vector<int>> noduri;
  fin>>N>>M;
  vector<int> vis(N+1);
  for (int i = 1; i  <= N; i++){
    vis[i] = 0;
    noduri.push_back({});
  }
  noduri.push_back({});
  for (int i = 0; i < M; i++){
    int st, dr;
    fin>>st>>dr;
    noduri[st].push_back(dr);
    noduri[dr].push_back(st);
  }
  for (int i = 1; i <= N; i++){
     if(vis[i] == 0){
       nr++;
       dfs(i, noduri, vis);
     }
  }
  fout<<nr;
  return 0;
}
