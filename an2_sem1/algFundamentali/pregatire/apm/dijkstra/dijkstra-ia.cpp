#include <functional>
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream fin("dijkstra.in");
ofstream fout("dijkstra.out");


int n,m;
vector<vector<pair<int,int>>> adj;

int main(){
  fin>>n>>m;
  adj.assign(n, {});
  for(int i = 0; i < m; i++){
    int st, dr, c;
    fin>>st>>dr>>c;
    adj[st-1].push_back({dr-1, c});
  }

  vector<int> tati(n, -2);
  vector<int> dist(n, 0);
  tati[0] = -1;
  dist[0] = 0;
  priority_queue<
    pair<int,int>,
    vector<pair<int, int>>,
    greater<pair<int,int>>
  > coada;
  coada.push({dist[0], 0});

  while(!coada.empty()){

    auto [cost, nod] = coada.top();
    coada.pop();
    if (cost != dist[nod]) continue;
    for (auto vecin : adj[nod]){
      int d = vecin.second;
      int v = vecin.first;
      if((dist[v] == 0 && v != 0) || dist[nod] + d < dist[v]){
        dist[v] = dist[nod] + d;
        tati[v] = nod;
        coada.push({dist[v], v});
      }
    }
  }

  for(int i = 1; i < n; i++){
    fout<<dist[i]<<" ";
  }

  return 0;
}
