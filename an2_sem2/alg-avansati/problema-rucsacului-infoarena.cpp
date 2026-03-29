#include <iostream>
#include <algorithm>
#include <fstream>
#include <utility>
using namespace std;
ofstream fout("rucsac.out");
ifstream fin("input.in");

int main(){
  int n, g;
  fin>>n>>g;

  int greutati[n+1];
  int valori[n+1];
  // int matrice[n+1][g+1];
  int matrice[g+1];
  
  for (int i = 0; i < n; i++){
    int x,y;
    fin>>x>>y;
    greutati[i+1] = x;
    valori[i+1] = y;
  }

  matrice[0]=0;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= g; j++){

      if(greutati[i] > j){
        matrice[j] = matrice[j-1];
      }else{
        matrice[j] = valori[i] + matrice[max(0, j-greutati[i])];
      }


    }
  }

  cout<<matrice[g];

  return 0;
}
