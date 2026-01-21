#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("ma.in");
ofstream fout("ma.out");

int main(){

  int n, x;
  vector<vector<int>> ma;
  cin>>n;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(j == 0){
        ma.push_back({});
      }
      cin>>x;
      if (x == 1){
        ma[i].push_back(j);
      }
    }
  }
  
  for (int i = 0; i < n; i++){
    cout<<ma[i].size()<<" ";
    for (int j = 0; j < ma[i].size(); j++){
      cout<<ma[i][j] + 1<<" ";
    }
    cout<<endl;
  }
  return 0;
}
