#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("dfs.in");
ofstream fout("dfs.out");


void dfs(vector<vector<int>>& adj, vector<int>& viz, int nod){

  viz[nod] = 1;

  for(auto i : adj[nod]){
    if(!viz[i]){
      dfs(adj, viz, i);
    }
  }

}


int main(){
  int n, m;
  fin>>n>>m;

  vector<vector<int>> la(n);
  vector<int> viz(n);

  for(int i = 0; i<m; i++){
    int st,dr;
    fin>>st>>dr;
    la[st-1].push_back(dr-1);
    la[dr-1].push_back(st-1);
  }
  for(int i = 0; i < n; i++){
    viz[i] = 0;
  }

  int compConexe = 0;
  for(int i = 0; i < n; i++){
    if(viz[i] == 0){
      dfs(la, viz, i);
      compConexe++;
    }
  }
  fout<<compConexe<<endl;

  return 0;
}
