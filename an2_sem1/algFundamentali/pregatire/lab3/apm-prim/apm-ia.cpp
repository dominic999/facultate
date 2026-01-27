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

int muchie_minima(vector<int>& distante, vector<bool>& noduri){
  int minim = -1;
  for(int i = 0; i < n; i++){
    if(!noduri[i])
      continue;
    if(minim == -1 || distante[i] < distante[minim]){
      minim = i;
    }
  }
  return minim;
}

void prim(int s, vector<int>& tati, vector<int>& distante, vector<vector<Muchie>>& adj ){
  tati[s] = -1;
  distante[s] = 0;
  vector<bool> noduri(n,true);

  for(int i = 0; i < n; i++){

    int nod_nou = muchie_minima(distante, noduri);
    noduri[nod_nou] = false;
    if(tati[nod_nou] != -1){
      muchii_arbore.push_back({tati[nod_nou], nod_nou, distante[nod_nou]});
      total = total + distante[nod_nou];
    }

    for(auto v : adj[nod_nou]){
      if(noduri[v.x] &&  v.pondere < distante[v.x]){
        distante[v.x] = v.pondere;
        tati[v.x] = nod_nou;
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
