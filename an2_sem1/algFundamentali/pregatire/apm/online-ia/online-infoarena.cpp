#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream fin("online.in");
ofstream fout("online.out");

struct Muchie{
  int x,y,c;
};

int n,m, k;
vector<vector<pair<int,int>>> muchii;
vector<int> tati;
vector<int> dist;
vector<bool> in_tree;
vector<bool> vis;
vector<vector<pair<int,int>>> muchii_arbore;
int total = 0;
int ok ;
vector<int> tati_dfs;
vector<int> cost_par;


int muchie_maxima(int x){
  int maxim = -1;
  while(tati_dfs[x] != -1){
    if(maxim == -1 || cost_par[x] > cost_par[maxim]){
      maxim = x;
    }
    x = tati_dfs[x];
  }
  return maxim;
   
}

void dfs(int x, int y){
  vis[x] = true;
  if(x == y){
    ok = 1;
    return;
  }
    
  for(auto v : muchii_arbore[x]){
    if(vis[v.first])
      continue;
    tati_dfs[v.first] = x;
    cost_par[v.first] = v.second;
    dfs(v.first, y);
    if(ok)
      return;
  }

}

void prim(){
  tati[0] = -1;
  dist[0] = 0;
  priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
  > coada;
  coada.push({dist[0], 0});
  while(!coada.empty()){
    auto [cost, x] = coada.top();
    coada.pop();
    if(in_tree[x])
      continue;
    in_tree[x] = true;
    if(tati[x] != -1){
      muchii_arbore[tati[x]].push_back({x, dist[x]});
      muchii_arbore[x].push_back({tati[x], dist[x]});
      total = total + dist[x];
    }
    for(auto v : muchii[x]){
      if(in_tree[v.first])
        continue;

      if(v.second < dist[v.first]){
        dist[v.first] = v.second;
        tati[v.first] = x;
        coada.push({v.second, v.first});
      }
    }

  }
}

int main(){
  
  fin>>n>>m;
  muchii.assign(n, {});
  tati.assign(n, -1);
  dist.assign(n, 100000000);
  in_tree.assign(n, false);
  muchii_arbore.assign(n, {});
  cost_par.assign(n, 0);
  for(int i = 0; i < m; i++){
    int x,y,c;
    fin>>x>>y>>c;
    muchii[x-1].push_back({y-1, c});
    muchii[y-1].push_back({x-1, c});
  }
  prim();
  fout<<total<<endl;
  fin>>k;
  for(int i = 0; i < k; i++){
    vis.assign(n, false);
    tati_dfs.assign(n, -2);
    cost_par.assign(n, 0);
    ok = 0;
    int x,y,c;
    fin>>x>>y>>c;
    tati_dfs[x-1] = -1;
    dfs(x-1, y-1);
    int nod_maxim = muchie_maxima(y-1);
    int parinte_nod_maxim = tati_dfs[nod_maxim];
    int val_muchie_maxima = cost_par[nod_maxim];
    if(val_muchie_maxima > c){
      auto &vp = muchii_arbore[parinte_nod_maxim];
      vp.erase(remove_if(vp.begin(), vp.end(),
                         [&](const pair<int,int> &e){ return e.first == nod_maxim; }),
               vp.end());

      auto &vb = muchii_arbore[nod_maxim];
      vb.erase(remove_if(vb.begin(), vb.end(),
                         [&](const pair<int,int> &e){ return e.first == parinte_nod_maxim; }),
               vb.end());
      muchii_arbore[x-1].push_back({y-1, c});
      muchii_arbore[y-1].push_back({x-1, c});
      total = total + c - val_muchie_maxima;
    }
    fout<<total<<endl;
  }

  return 0;
}
