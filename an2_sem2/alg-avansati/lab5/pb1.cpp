#include <iostream>
#include <vector>
using namespace std;

int calc_det (int matrice[][3]){
  
  int det = 0;
  for (int i = 0; i < 3; i++){
    det += matrice[0][i] * matrice[1][(i+1)%3] * matrice[2][(i+2)%3];
    det -= matrice[0][i] * matrice[1][(i+2)%3] * matrice[2][(i+1)%3];
  }
}

int main(){

  int t;
  cin>>t;
  vector<int[6]> teste;
  for (int i = 0; i < t; i++){
    teste
  }




  return 0;
}
