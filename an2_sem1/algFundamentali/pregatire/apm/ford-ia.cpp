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
vector<Muchie> muchii;
vector<int> d;
vector<int> tati;

int main(){
  fin>>n>>m;
  muchii.resize(m);
  d.assign(n, 100000000);
  tati.assign(n, -2);
  for(int i = 0; i < m; i++ ){
    int st, dr, c;
    fin>>st>>dr>>c;
    muchii[i] = {st-1,dr-1, c};
  }
  d[0] = 0;
  tati[0] = -1;
  int modif = 0;
  for(int i = 0 ; i < n-1; i++){
    modif = 0;
    for(auto muchie : muchii){
      int u = muchie.x;
      int v = muchie.y;
      int cost = muchie.c;
      if(d[u] <100000000 &&  d[u] + cost < d[v]){
        modif = 1;
        tati[v] = u;
        d[v] = d[u] + cost;
      }
    }
    if(modif = 0)
      break;
  }

  modif = 0;
  for(auto muchie : muchii){
    int u = muchie.x;
    int v = muchie.y;
    int cost = muchie.c;
    if(d[u] < 100000000 && d[u] + cost < d[v]){
      modif = 1;
      tati[v] = u;
      d[v] = d[u] + cost;
      break;
    }
  }
  if(modif == 1){
    fout<<"Ciclu negativ!";
  }else{
    for(int i = 1; i < n; i++){
      fout<<d[i]<<" ";
    }
  }
  return 0;
}
