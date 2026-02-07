#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("input.in");

struct Muchie{
  int x,y;
  long long c;
};

int n,m,q;
const long long inf = (long long)4e18;
vector<Muchie> adj;
vector<long long> dist;
vector<int> p;


int main(){

  cin>>n>>m;
  dist.assign(n+1, inf);
  p.assign(n+1, -2);
  for(int i = 1; i < n+1; i++){
    adj.push_back({0, i, 0});
  }
  for(int i = 1; i < m+1; i++){
    int a,b;
    long long c;
    cin>>a>>b>>c;
    adj.push_back({a,b,c});
  }

  int nod_ciclu = -1;
  dist[0] = 0;
  p[0] = -1;
  for(int i = 0; i < n+1; i++){
    nod_ciclu = -1;
    for(auto muchie : adj){
      int x = muchie.x;
      int y = muchie.y;
      long long c = muchie.c;
      if(dist[x] != inf && dist[x] + c < dist[y]){
        dist[y] = dist[x] + c;
        p[y] = x;
        nod_ciclu = y;
      }
    }
  }

  if(nod_ciclu  == -1){
    cout<<"NO";
    return 0;
  }

  cout<<"YES"<<endl;
  for(int i = 0; i < n+1; i++){
    nod_ciclu = p[nod_ciclu];
  }
  vector<int> cycle;
  for (int cur = nod_ciclu;; cur = p[cur]) {
    cycle.push_back(cur);
    if (cur == nod_ciclu && cycle.size() > 1) break;
  }
  reverse(cycle.begin(), cycle.end());

  for (int v : cycle)
    cout << v << " ";
  cout << "\n";

  return 0;
}
