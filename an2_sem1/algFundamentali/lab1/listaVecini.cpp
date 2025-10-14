#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
  
ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int main(){

  int n;
  fin>>n;
  int adiacenta[101][101]={0};
  int max = 0;
  int st, dr;
  vector<int> vecini[101];

  for (int i =0; i < 101; i++){
    for(int j = 0; j < 101; j++){
      adiacenta[i][j] = 0;
    }
  }

  while (fin>>st>>dr){
    if(st > max){
      max = st;
    }
    if(dr > max){
      max = dr;
    }
    adiacenta[st][dr] = 1;
    adiacenta[dr][st] = 1;
  }

  for(int i = 1; i<=max; i++){
    int sum = 0;
    for(int j = 1; j<=max; j++){
      if(adiacenta[i][j] == 1){
        vecini[i].push_back(j);
        sum++;
      }
    }
    vecini[i].insert(vecini[i].begin(), sum);
  }

  for(int i = 1; i <= max; i++){
    for(auto j: vecini[i]){
      fout<<j<< " ";
    }
    fout<<endl;
  }


  return 0;
}
