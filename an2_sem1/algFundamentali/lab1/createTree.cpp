#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
ifstream fin("in.txt");

int main(){

  int x,n;
  vector<pair<int,int>> v_term, v_neterm;
  fin>>n;
  int s = 0;
  for(int i = 1; i <= n; i++){
    fin>>x;
    s+=x;
    if(x > n-1 || x<=0){
      cout<<"grad immpos";
      return 0;
    }
    if(x == 1){
      v_term.push_back({x,i});
    }else{
      v_neterm.push_back({x,i});
    }
  }
  if(s!=2*(n-1)){
    cout<<"imposibil";
    return 0;
  }
  while(v_neterm.size() > 0){
    cout<<v_term.back().second<<" "<<v_neterm.back().second;
    v_term.pop_back();
    v_neterm.back().first--;
    if(v_neterm.back().first==1){
      v_term.push_back(v_neterm.back());
      v_neterm.pop_back();
    }
  }
  cout<<v_term[0].second<<" "<<v_term[1].second;
  return 0;
}
