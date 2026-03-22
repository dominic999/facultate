#include <queue>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("bellmanford.in");
ofstream fout("bellmanford.out");

struct Muchie{
  int x, y, c;
};

int n,m;
vector<vector<pair<int,int>>> muchii;
vector<int> d;
vector<int> tati;

int main(){
  fin>>n>>m;
  muchii.resize(n);
  d.assign(n, 100000000);
  tati.assign(n, -2);
  for(int i = 0; i < m; i++ ){
    int st, dr, c;
    fin>>st>>dr>>c;
    muchii[st-1].push_back({dr-1, c});
  }
  d[0] = 0;
  tati[0] = -1;
  queue<int> coada;
  vector<bool> inq(n, false);
  vector<int> cnt(n, 0);
  coada.push(0);
  inq[0] = true;
  cnt[0]++;
  int neg = false;
  while(!coada.empty()){
    if(neg)
      break;
    auto nod = coada.front();
    coada.pop();
    inq[nod] = false;
    for(auto vecin : muchii[nod]){
      int v = vecin.first;
      int c = vecin.second;
      if(d[nod] <100000000 &&  d[nod] + c < d[v]){
        tati[v] = nod;
        d[v] = d[nod] + c;
        if(!inq[v]){
          coada.push(v);
          inq[v] = true;
          cnt[v]++;
        }
        if(cnt[v] > n){
          fout<<"Ciclu negativ!";
          neg = true;
          break;
        }
          
      }
    }
  }

  if(!neg){
    for(int i = 1; i < n; i++){
      fout<<d[i]<<" ";
    }

  }
  return 0;
}
