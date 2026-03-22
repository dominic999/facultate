#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("pm.in");
ofstream fout("pm.out");
int n,m;
vector<int> durate;
vector<vector<int>> adj;
vector<vector<int>> predecesori;
vector<int> sort_top;
vector<int> grade_intrare;
vector<int> incepere;
vector<int> finalizare;

void sortare_topologia(){
  queue<int> noduri;
  for(int i = 0; i < n; i++){
    if (grade_intrare[i] == 0){
      noduri.push(i);
    }
    
  }
  while(!noduri.empty()){
    int u = noduri.front();
    sort_top.push_back(u);
    noduri.pop();
    for (auto v : adj[u]){
      grade_intrare[v]--;
      if(grade_intrare[v] == 0)
        noduri.push(v);
    }
  }
  
}

int main(){

  fin>>n;
  durate.resize(n);
  adj.assign(n, {});
  incepere.assign(n, 0);
  finalizare.assign(n, 0);
  predecesori.assign(n, {});
  grade_intrare.assign(n,0);
  for (int i = 0; i < n; i++){
    int durata;
    fin>>durata;
    durate[i] = durata;
  }
  for (int i = 0; i < n; i++){
    int dependente;
    fin>>dependente;
    for(int j = 0; j < dependente; j++){
      int nod;
      fin>>nod;
      adj[nod-1].push_back(i);
      predecesori[i].push_back(nod-1);
      grade_intrare[i]++;
    }
  }
  // for(int i = 0; i < n; i++){
  //   cout<<i+1;
  //   cout<<": ";
  //   for(auto x : adj[i]){
  //     cout<<x+1<<" ";
  //   }
  //   cout<<endl;
  // }
  sortare_topologia();
  for(auto x : sort_top){
    incepere[x] = 0;
    cout<<"predecesorii lui "<<x+1<<" sunt: ";
    for (auto predecesor : predecesori[x]){
      cout<<predecesor+1<<" ";
      incepere[x] = max(incepere[x], durate[predecesor] + incepere[predecesor]);
    }
    finalizare[x] = incepere[x] + durate[x];
    cout<<", iar mom_incepere este: "<<incepere[x];
    cout<<endl;
  }
  cout<<endl;

  for(auto x : incepere){
    cout<<x<<endl;
  }
  cout<<endl<<"finalizare: ";
  for(auto x : finalizare){
    cout<<x<<endl;
  }



  return 0;
}
