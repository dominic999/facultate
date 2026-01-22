#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;
ifstream fin("bfs.in");
ofstream fout("bfs.out");

const int inf = 1000000000;

void bfs(vector<vector<int>>& adj, vector<int>& d, int nod){

}

int main(){

  int n, m, s;
  vector<vector<int>> adj(n);
  vector<int> d(n, inf);
  d[s] = 0;
  fin>>n>>m>>s;
  for(int i = 0; i < m; i++){
    int st, dr;
    fin>>st>>dr;
    adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }


  return 0;
}

