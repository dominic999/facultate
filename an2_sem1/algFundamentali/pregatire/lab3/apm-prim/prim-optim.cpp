#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
ifstream fin("apm.in");
ofstream fout("apm.out");

struct Muchie  {
  int x, pondere;
};
struct MuchieArobre {
  int x,y,c;
};

int n,m;
vector<MuchieArobre> muchii_arbore;
int total = 0;

void prim(int s, vector<int>& tati, vector<int>& distante, vector<vector<Muchie>>& adj ){
  tati[s] = -1;
  distante[s] = 0;
  vector<bool> noduri(n,true);
  priority_queue< 
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
  > coada;

  coada.push({0,s});
  while(!coada.empty()){
    auto [cost, actual] = coada.top();
    coada.pop();
    if(!noduri[actual])
      continue;
    noduri[actual] = false;
    if(tati[actual] != -1){
      muchii_arbore.push_back({tati[actual], actual, distante[actual]});
      total = total + distante[actual];
    }
    for(auto v : adj[actual]){
      if(noduri[v.x] &&  v.pondere < distante[v.x]){
        distante[v.x] = v.pondere;
        tati[v.x] = actual;
        coada.push({distante[v.x], v.x});
      }
    }
  }


}


int main(){
  fin>>n>>m;
  vector<vector<Muchie>> adj(n);
  vector<int> tati(n, -2);
  vector<int> distante(n, 100000000);
  for(int i = 0; i < m; i++){
    int x,y,c;
    fin>>x>>y>>c;
    adj[x-1].push_back({y-1, c});
    adj[y-1].push_back({x-1, c});
  }

  prim(0, tati, distante, adj);
  fout<<total<<endl<<muchii_arbore.size()<<endl;
  for(auto x : muchii_arbore){
    fout<<x.x+1<<" "<<x.y+1<<" "<<endl;
  }

  return 0;
}
