#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>
using namespace std;
ofstream fout("rucsac.out");
ifstream fin("rucsac.in");

int main(){
  int n, g;
  fin>>n>>g;

  int greutati[n+1];
  int valori[n+1];

  for (int i = 0; i < n; i++){
    int x;
    fin>>x;
    valori[i+1] = x;
  }

  for (int i = 0; i < n; i++){
    int x;
    fin>>x;
    greutati[i+1] = x;
  }


  vector<int> dp(g + 1, 0);

  for (int i = 1; i <= n; i++) {
      for (int j = g; j >= greutati[i]; j--) {
          dp[j] = max(dp[j], dp[j - greutati[i]] + valori[i]);
      }
  }

  fout << dp[g] << '\n';

  return 0;
}
