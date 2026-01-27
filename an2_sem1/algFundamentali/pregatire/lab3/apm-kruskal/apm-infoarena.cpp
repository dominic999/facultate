#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
ifstream fin("apm.in");
ofstream fout("apm.out");

struct Muchie  {
  int x,y,c;
};
int n,m;

bool cmp(const Muchie& a, const Muchie& b) {
    return a.c < b.c;
}

int reprezentant(int u, vector<int>& tati){
  if(tati[u] == u){
    return u;
  }
  tati[u] = reprezentant(tati[u], tati);
  return tati[u];
}

bool renuniune(int u, int v, vector<int>& tati, vector<int>& inaltimi){
  int ru = reprezentant(u, tati);
  int rv = reprezentant(v, tati);
  if(ru == rv){
    return false;
  }
  if(inaltimi[ru] >= inaltimi[rv]){
    tati[rv] = ru;
    if(inaltimi[ru] == inaltimi[rv]){
      inaltimi[ru]++;
    }
  }else{
    tati[ru] = tati[rv];
  }
  return true;
}

int main(){
  fin>>n>>m;
  vector<Muchie> muchii;
  vector<Muchie> muchii_arbore;
  vector<int> tati(n, -1);
  vector<int> inaltimi(n,0);
  for(int i = 0; i < m; i++){
    int x,y,c;
    fin>>x>>y>>c;
    muchii.push_back({x-1,y-1,c});
  }
  sort(muchii.begin(), muchii.end(), cmp);
  for(int i = 0; i < n; i++){
    tati[i] = i;
  }
  int nrMuchii = 0;
  int sum = 0;
  while(nrMuchii < n-1 && muchii.size() > 0){
  for(int i = 0; i < m && nrMuchii < n-1; i++)
    if(renuniune(muchii[i].x, muchii[i].y, tati, inaltimi)){
      muchii_arbore.push_back(muchii[i]);
      nrMuchii++;
      sum = sum+muchii[i].c;
    }
  }
  fout<<sum<<endl<<muchii_arbore.size()<<endl;
  for(auto v : muchii_arbore){
    fout<<v.x+1<<" "<<v.y+1<<endl;
  }

  return 0;
}
