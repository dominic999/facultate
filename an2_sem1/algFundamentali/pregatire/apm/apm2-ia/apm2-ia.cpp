#include <cmath>
#include <iostream>
#include <algorithm>
#include <algorithm>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream fin("apm2.in");
ofstream fout("apm2.out");

struct Muchie {
  int x,y,c;
};

int n,m,q;
vector<Muchie> muchii_graf;
vector<vector<pair<int,int>>> muchii_arbore;
vector<int> tata;
vector<int> parinte_dfs;
vector<int> dist;
vector<int> vis;
vector<vector<pair<int,int>>> muchii_drum;
int nr_muchii_arbore = 0;
int cost_total = 0;
int ok;
int maxim_curent;

bool cmp_cost(Muchie& a, Muchie& b){
  return a.c < b.c;
}


int reprezentant(int x){
  if(tata[x] == x)
    return x;

  tata[x] = reprezentant(tata[x]);
  return tata[x];

}

void dfs(int x, int y, int max_curent){
  if(ok)
    return;
  if(x == y){
    ok = 1;
    maxim_curent = max_curent;
    return;
  }
  vis[x] = 1;
  for(auto v : muchii_arbore[x]){
    if(vis[v.first])
      continue;
    parinte_dfs[v.first] = x;
    dfs(v.first, y, max(max_curent, v.second));
    if(ok)
      return;
  }
}

void kruskal(){
  for(const auto& muchie : muchii_graf){
    if(nr_muchii_arbore == n-1)
      break;
    auto [x, y, c] = muchie;
    int rx = reprezentant(x);
    int ry = reprezentant(y);
    if(rx == ry)
      continue;
    nr_muchii_arbore++;
    cost_total = cost_total + c;
    muchii_arbore[x].push_back({y, c});
    muchii_arbore[y].push_back({x, c});
    //inseamna ca rx va deveni sefu
    //trebuie sa verific care este muchia maxima
    if(dist[rx] >= dist[ry]){
      tata[ry] = rx;
      if(dist[rx] == dist[ry]){
        dist[rx]++;
      }
    }else{
      tata[rx] = ry;
    }

  }
  
}



int main(){
  fin>>n>>m>>q;
  dist.assign(n, 0);
  vis.assign(n, 0);
  muchii_arbore.assign(n, {});
  for(int i = 0; i < n; i++){
    tata.push_back(i);
  }
  for(int i = 0; i < m; i++){
    int x,y,c;
    fin>>x>>y>>c;
    muchii_graf.push_back({x-1,y-1,c});
  }
  sort(muchii_graf.begin(), muchii_graf.end(), cmp_cost);
  kruskal();
  for(int i = 0; i < q; i++){
    int x,y;
    fin>>x>>y;
    --x; --y;
    parinte_dfs.assign(n, -2);
    parinte_dfs[x] = -1;
    ok = 0;
    maxim_curent = 0;
    vis.assign(n, 0);
    dfs(x, y, 0);
    fout<<maxim_curent-1<<endl;
  }

  return 0;
}



