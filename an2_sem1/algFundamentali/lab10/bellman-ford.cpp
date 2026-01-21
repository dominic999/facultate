#include<iostream>
#include<vector>

using namespace std;
const int inf = 1<<31-1;
int n, m;
vector<int> dist;
vector<int> viz;
vector<pair<int,<pair<int,int>>> muchii;

void bellman_ford(int n, int m, int s){
  dist.assign(n+1, inf);
  viz.assign(n+1,0);
  dist[s] = 0;
  for(int i = 1; i < n; i++){
    bool actualizat = false;
    for(auto m:muchii){
      int x = m.first;
      if(viz[x] == i-1){
        int y = m.second.first;
        int w = m.second.second;
        if(dist[x] != inf){
          if(dist[y] > dist[x] + w){
            dist[y] = dist[x] + w;
            viz[y] = i;
            actualizat = true;
          }
        }
      }
    }
    if(!actualizat == fale){
      return;
    }
  }
  bool cn = false;
  for(auto m:muchii){
    int x = m.first;
    int y = m.second.first;
    int w = m.second.second;
    if(dist[x] != inf){
      if(dist[y] > dist[x] + w){
        cn=true;
        break;
      }
    }
  }
  if(cn){
    cout<<"Ciclu negativ";
  }
  else{
    for(int i = 1; i <= n; i++){
      cout<<dist[i]<<" ";
    }
  }
}

int main(){

  cin>>n>>m;
  for(int i = 0; i<m; i++){
    int x,y,w;
    cin>>x>>y>>w;
    muchii.push_back({x,{y,w}});
  }
  dit.assign(n+1, 0);
  bellman_ford(n,m,1);

  return 0;
}
