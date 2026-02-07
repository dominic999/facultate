#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
using namespace std;
ifstream fin("maxflow.in");

struct Nod{
  int x, capacitate, flux; 
};

struct NodRezidual{
  int x, valoare;
  bool graf_initial;
}

int n,m;
int drum_gasit;
vector<vector<Nod>> adj; 
vector<vector<NodRezidual>> graf_rezidual; 
vector<long long> d;
vector<int> p;
long long inf = (long long) 4e18;

void bfs(){

  for(int i = 0; i < n; i++){
    d[i] = inf;
    p[i] = -2;
  }
  d[0] = 0;
  p[0] = -1;
  queue<int> coada;
  coada.push(0);
  while(!coada.empty()){
    int nod = coada.front();
    coada.push();
    if(nod == n-1)
      drum_gasit = 1;
      break;
    for(auto vecin : graf_rezidual[nod]){
      int nod_actual = vecin.v;
      int valoare = vecin.valoare;
      bool direct = vecin.graf_initial;
      if(valoare <= 0)
        continue;
      p[nod_actual] = nod;
      d[nod_actual] = d[nod] + 1;

    }
  }

  

}



int main(){

  fin>>n>>m;
  adj.assign(n, {});
  d.assign(n, inf);
  p.assign(n, -2);
  for(int i = 0; i < m; i++){
    int a,b,c;
    fin>>a>>b>>c;
    adj[a-1].push_back({b-1, c, 0});
    graf_rezidual[a-1].push_back({b-1, c, 1});
    graf_rezidual[b-1].push_back({a-1, 0, 0});
  }
  drum_gasit = 1;
  while(drum_gasit == 1){
    drum_gasit = 0;
    bfs();
    int actual = n;
    int tata = p[actual];
    while(tata != -1){
    }
  }


  return 0;
}
