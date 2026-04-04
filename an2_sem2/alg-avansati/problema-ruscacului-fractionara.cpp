#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>
using namespace std;
ifstream fin("input.in");

int main(){
  int n, g;
  fin>>n>>g;

  int greutati[n+1];
  int valori[n+1];
  vector<pair<float, int>> raport(n+1);
  cout<<n<<" "<<g<<endl<<endl;

  for (int i = 0; i < n; i++){
    int x;
    fin>>x;
    valori[i+1] = x;
  }

  for (int i = 0; i < n; i++){
    int x;
    fin>>x;
    greutati[i+1] = x;
    raport[i+1].first = (float)valori[i+1] / greutati[i+1];
    raport[i+1].second = i+1;
  }
  sort(raport.begin(), raport.end());

  for(int i = 1; i <= n; i++){
    cout<<valori[i]<<"::"<<greutati[i]<<endl;
  }
  cout<<endl;


  for(int i = 1; i <= n+1; i++){
    cout<<raport[i].first<<"::"<<raport[i].second<<endl;
  }

  int suma = 0;
  for(int i = n; i > 0 && suma < g; i--){
    if (suma + greutati[raport[i].second] <= g){
      suma += valori[raport[i].second];
      continue;
    }
    int rest = g - suma;
    float procent = (float) rest * 100 / g;
    float adaguare = procent * valori[raport[i].second];
    suma+=adaguare;
    cout<<"adaugare: "<<adaguare<<endl;

  }
  cout<<suma<<endl;

  // vector<int> dp(g + 1, 0);
  //
  // for (int i = 1; i <= n; i++) {
  //     for (int j = g; j >= greutati[i]; j--) {
  //         dp[j] = max(dp[j], dp[j - greutati[i]] + valori[i]);
  //     }
  // }

  // cout << dp[g] << '\n';

  return 0;
}
