#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream fin("royfloyd.in");
ofstream fout("royfloyd.out");

int inf = 1000000000;

int main(){
  int n;
  fin>>n;
  vector<vector<int>> matrice(n);
  vector<vector<int>> predecesor(n, vector<int>(n));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int x;
      fin>>x;
      matrice[i].push_back(x);
      if(x == 0 && i != j){
        matrice[i][j] = inf;
      }
      if(x > 0){
        predecesor[i][j] = i;
      }else{
        predecesor[i][j] = 0;
      }
    }
  }

  for(int  k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if (matrice[i][k] != inf && matrice[k][j] != inf 
            && matrice[i][k] + matrice[k][j] < matrice[i][j]){
          matrice[i][j] = matrice[i][k] + matrice[k][j];
          predecesor[i][j] = k;
        }
      }
    }
  }

  for(int i = 0 ; i < n; i++){
    for(int j = 0; j < n; j++){
      fout<<matrice[i][j]<<" ";
    }
    fout<<endl;
  }

  return 0;
}

