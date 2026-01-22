#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
ifstream fin("ctc.in");
ofstream fout("ctc.out");

int idx = 1;
vector<vector<int>> ctc;
stack<int> stiva;


void tarjan (int s, 
    vector<vector<int>>& adj, 
    vector<int>& desc, 
    vector<int>& low, 
    vector<int>& vis, 
    vector<int>& inStack){
  
  stiva.push(s);
  desc[s] = low[s] = idx++;
  vis[s] = 1;
  inStack[s] = 1;
  for (auto v : adj[s]){
    if (vis[v] == 0){
      tarjan(v, adj, desc, low, vis, inStack);
      low[s] = min(low[s], low[v]);
    }else if(inStack[v] == 1){
      low[s] = min(low[s], desc[v]);
    }
  }
  if(low[s] == desc[s]){
    ctc.push_back({});
    while(stiva.top() != s) {
      ctc.back().push_back(stiva.top());
      inStack[stiva.top()] = 0;
      stiva.pop();
    }
    ctc.back().push_back(stiva.top());
    inStack[stiva.top()] = 0;
    stiva.pop();
  }

}


int main(){

  int n,m;
  fin>>n>>m;
  vector<vector<int>> adj(n);
  vector<int> desc(n, 0);
  vector<int> low(n, 0);
  vector<int> vis(n, 0);
  vector<int> inStack(n, 0);

  for (int i = 0; i < m; i++){
    int st,dr;
    fin>>st>>dr;
    adj[st-1].push_back(dr-1);
  }
  for (int i = 0; i < n; i++){
    if(vis[i] == 0){
      tarjan(i, adj, desc, low, vis, inStack);
    }
  }

  fout<<ctc.size()<<endl;
  for(int i = 0; i < ctc.size(); i++){
    for(int j = 0; j < ctc[i].size(); j++){
      fout<<ctc[i][j] + 1<< " ";
    }
    fout<<endl;
  }

  return 0;
}

