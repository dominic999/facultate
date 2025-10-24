#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

ifstream fin("bfs.in");
ofstream fout("bfs.out");

void bfs(int nod, vector<vector<int>> &vecini, vector<int> &inaltimi){
  queue<int> coada;
  coada.push(nod);
  while(!coada.empty()){
    int n = coada.front();
    coada.pop();
    for(auto x : vecini[n]){
      if (inaltimi[x] < 0){
        coada.push(x);
        inaltimi[x] = inaltimi[n] + 1;
      }
    }
  }
}

int main(){
  
  int N, M, S;
  fin>>N>>M>>S;
  vector<vector<int>> vecini;
  vector<int> inaltimi(N+1);
  for(int i = 0; i <= N; i++){
    vecini.push_back({});
    if(i == S){
      inaltimi[i] = 0;
    }else{
      inaltimi[i] = -1;
    }
  }
  vecini.push_back({});
  for(int i = 0; i < M; i++){
    int st, dr;
    fin>>st>>dr;
    vecini[st].push_back(dr);
  }
  bfs(S, vecini, inaltimi);
  for(int i = 1; i <= N; i++){
    fout<<inaltimi[i]<<" ";
  }

  return 0;
}
