#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("ma.in");

bool imp = false;

void dfs(int s, vector<vector<int>>& adj, vector<int>& cul, int culoare){

  if(imp){
    return;
  }
  cul[s] = culoare;
  for(auto x : adj[s]){
    if(imp){
      return;
    }
    if(cul[x] == 0){
      dfs(x, adj, cul, 3-culoare);
    }else if(cul[x] == cul[s]){
      imp = true;
      return;
    }
  }

}

int main(){

  int n,m;
  cin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> cul(n, 0);
  for (int i = 0 ; i < m; i++){
    int st,dr;
    cin>>st>>dr;
    adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }

  for(int i = 0; i < n; i++){
    if(imp){
      break;
    }
    if(cul[i] == 0){
      dfs(i, adj, cul, 1);
    }
  }
  if(imp){
    cout<<"IMPOSSIBLE";
  }else{
    for(auto x : cul){
      cout<<x<<" ";
    }
  }

  return 0;
}
