#include <iostream>
#include <fstream> 

using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

int main(){
  
  int n, m;
  fin>>n>>m;
  int muchii[101][101] = {0};
  int max = 0;

  for (int i = 0; i < m; i++){
    int st, dr;
    fin>>st>>dr;
    muchii[st][dr] = 1;
    muchii[dr][st] = 1;
    if(st > max){
      max = st;
    }
    if(dr > max){
      max = dr;
    }
  }
  for (int i = 1; i <= max; i++){
    for(int j = 1; j <= max; j++){
      fout<<muchii[i][j] << " ";
    }
    fout<<endl;
  }
  return 0;
}
