#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("retea2.in");
ofstream fout("retea2.out");

int n,m;
//pana la n-1 sunt centrale, de la n la n+m-1 sunt blocrui
vector<pair<int,int>> cladiri;
vector<double> dist;
vector<bool> in_tree;
vector<int> tata;
double total = 0;

int main(){
  
  fin>>n>>m;
  int x,y;
  cladiri.reserve(n+m);
  for(int i = 0; i < n+m; i++){
    fin>>x>>y;
    cladiri.push_back({x,y});
    if(i < n){
      dist.push_back(0);
      in_tree.push_back(true);
    }else{
      dist.push_back(10000000);
      in_tree.push_back(false);
    }
    tata.push_back(i);
  }

  for(int i = n; i < n+m; i++){
    tata[i] = -1;
    for(int j = 0; j < n; j++){
      double dx = cladiri[i].first - cladiri[j].first;
      double dy = cladiri[i].second - cladiri[j].second;
      double cost = sqrt(dx*dx + dy*dy);
      if(cost < dist[i]){
        dist[i] = cost;
        tata[i] = j;
      }
      
    }
  }

  int minim;
  for(int i = 0; i < m; i++){
    minim = -1;
    for(int j = n; j < n+m; j++){
      if(in_tree[j])
        continue;
      if(minim == -1 || dist[j] < dist[minim]){
        minim = j;
      }
    }
    in_tree[minim] = true;
    total = total + dist[minim];
    for(int j = n; j < n+m; j++){
      if(in_tree[j])
        continue;
      double dx = cladiri[minim].first - cladiri[j].first;
      double dy = cladiri[minim].second - cladiri[j].second;
      double c = sqrt(dx * dx + dy * dy);
      if(c < dist[j]){
        dist[j] = c;
        tata[j] = minim;
      }
    }
  }
  fout.setf(ios::fixed);
  fout.precision(6);
  fout << total << "\n";

  return 0;
}
