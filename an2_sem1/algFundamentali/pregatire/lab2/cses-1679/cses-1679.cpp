#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

queue<int> coada;
vector<int> ordonare;

void sortTop(vector<int>& gradIntern, vector<vector<int>>& adj){

  while(!coada.empty()){
    int u = coada.front();
    ordonare.push_back(u);
    coada.pop();
    for (auto vecin : adj[u]){
      if(--gradIntern[vecin] == 0){
        coada.push(vecin);
      }
    }
  }

}
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> gradIntern(n, 0);

  for(int i = 0; i < m; i++){
    int st, dr;
    cin>>st>>dr;
    gradIntern[dr-1]++;
    adj[st-1].push_back(dr-1);
  }

  for(int i = 0; i < n; i++){
    if(gradIntern[i] == 0){
      coada.push(i);
    }
  }
  sortTop(gradIntern, adj);
  bool imp = false;
  if(ordonare.size() < n){
    imp = true;
  }
  if(imp){
    cout<<"IMPOSSIBLE";
  }else{
    for(auto x : ordonare){
      cout<<x+1<<" ";
    }
  }

  return 0;
}

