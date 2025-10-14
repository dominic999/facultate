#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
ifstream fin("in.txt");

int main(){
  int x;
  int n;
  vector<pair<int,int>> v;
  fin >> n;
  for(int i = 1; i <= n; i++){
    fin>>x;
    v.push_back({x,i});
  }
  sort(v.begin(), v.end(), greater<>());

  int sum=0;
  for(int i = 1; i < n; i++){
    if(v[i].first > n-1 || v[i].first < 0){
      cout<<"grad imposibil\n";
      return 0;
    }
    sum+=v[i].first;
  }
  if(sum%2 != 0){
    cout<<"suma impara\n";
    return 0;
  }

  vector<pair<int, int>> muchii;
  while(v[0].first > 0){
    for(int i = 1; i < v[0].first; i++){
      muchii.push_back({v[0].second, v[i].second});
      v[i].first--;
      if(v[i].first < 0){
        cout<<"construcite nereusita";
        return 0;
      }
    }
    v[0].first = 0;
    sort(v.begin(), v.end(), greater<>());
  }

  for(auto x: muchii){
    cout<<x.first<< ' '<<x.second;
  }

  return 0;
}
