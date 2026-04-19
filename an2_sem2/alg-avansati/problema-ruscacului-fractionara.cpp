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
  sort(raport.begin() + 1, raport.end());

  int gretutate_totala = 0;
  float valoare_totala = 0;
  for(int i = n; i > 0 && gretutate_totala < g; i--){
    if (gretutate_totala + greutati[raport[i].second] <= g){
      gretutate_totala += greutati[raport[i].second];
      valoare_totala += valori[raport[i].second];
      continue;
    }
    int rest = g - gretutate_totala;
    float procent = rest / greutati[raport[i].second];
    float adaguare = procent * valori[raport[i].second];
    // gretutate_totala+=adaguare;
    valoare_totala += adaguare;
    break;
  }
  cout<<valoare_totala<<endl;


  return 0;
}
