#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
ifstream fin("ma.in");
vector<int> drum;
int gasit = 0;

void dfs (int s, vector<vector<int>>& adj, vector<int>& vis, vector<int>& tati){

  if(gasit == 1){
    return;
  }
  vis[s] = 1;
  for(auto v : adj[s]){
    if(gasit == 1){
      return;
    }
    if(vis[v] == 0){
      tati[v] = s;
      dfs(v, adj, vis, tati);
    }else if(tati[s] != v){
      //asta inseamna ca am gasit o muchie de intoarcere, adica un ciclu
      //acum vreau sa ma duc sus pe dfs tree(vectorul de tati) pana dau de v
      int actual = s;
      gasit = 1;
      drum.push_back(v);
      while(actual != v){
        drum.push_back(actual);
        actual = tati[actual];
      }
      drum.push_back(actual);

    }
  }

}


int main(){

  int n,m;
  cin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> vis(n, 0);
  vector<int> tati(n, 0);
  for(int i = 0; i < m; i++){
    int st,dr;
    cin>>st>>dr;
    adj[st-1].push_back(dr-1);
    adj[dr-1].push_back(st-1);
  }

  for(int i = 0; i < n; i++){
    if(gasit == 1){
      break;
    }
    if(vis[i] == 0){
      dfs(i, adj, vis, tati);
    }
  }
  if(gasit == 0){
    cout<<"IMPOSSIBLE";
  }else{
    cout<<drum.size()<<endl;
    for(auto i : drum){
      cout<<i+1<<" ";
    }
  }


  return 0;
}

