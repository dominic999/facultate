#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("ma.in");
ofstream fout("ma.out");

int main(){

  int n, x;
  vector<pair<int, int>> ma;
  fin>>n;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      fin>>x;
      if (x == 1 && j > i){
        ma.push_back({i, j});
      }
    }
  }

  for (int i = 0; i < ma.size(); i++){
    cout<<ma[i].first + 1<<" "<<ma[i].second + 1<<endl;
  }

  return 0;
}
