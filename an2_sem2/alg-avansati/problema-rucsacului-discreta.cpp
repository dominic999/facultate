#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>
using namespace std;

int main(){
  int n, g;
  cin>>n>>g;

  int greutati[n+1];
  int valori[n+1];

  for (int i = 0; i < n; i++){
    int x;
    cin>>x;
    valori[i+1] = x;
  }

  for (int i = 0; i < n; i++){
    int x;
    cin>>x;
    greutati[i+1] = x;
  }


  vector<int> dp(g + 1, 0);

  for (int i = 1; i <= n; i++) {
      for (int j = g; j >= greutati[i]; j--) {
          dp[j] = max(dp[j], dp[j - greutati[i]] + valori[i]);
      }
  }

  cout << dp[g] << '\n';

  return 0;
}
