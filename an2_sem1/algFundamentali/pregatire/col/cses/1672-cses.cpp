#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("input.in");

int n,m,q;
const long long inf = (long long)4e18;
vector<vector<long long>> matrice_adiacenta;
vector<vector<int>> p;

int main(){
  cin>>n>>m>>q;
  matrice_adiacenta.assign(n, vector<long long>(n, inf));
  p.assign(n, vector<int>(n, 0));

  for(int i = 0; i < n; i++)
    matrice_adiacenta[i][i] = 0;

  for(int i = 0; i < m; i++){
    int a,b;
    long long c;
    cin>>a>>b>>c;
    matrice_adiacenta[a-1][b-1] = min(matrice_adiacenta[a-1][b-1], c);
    matrice_adiacenta[b-1][a-1] = min(matrice_adiacenta[b-1][a-1], c);
    p[a-1][b-1] = a-1;
    p[b-1][a-1] = b-1;
  }

  for(int k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      if (matrice_adiacenta[i][k] == inf) continue;
      for(int j = 0; j < n; j++){
        if (matrice_adiacenta[k][j] == inf) continue;
        if(matrice_adiacenta[i][k] + matrice_adiacenta[k][j] < matrice_adiacenta[i][j]){
          matrice_adiacenta[i][j] = matrice_adiacenta[i][k] + matrice_adiacenta[k][j];
          p[i][j] = p[k][j];
        }
      }
    }
  }
  for(int i = 0; i < q; i++){
    int x,y;
    cin>>x>>y;
    if(matrice_adiacenta[x-1][y-1] == inf){
      cout<<-1<<endl;
    }else
      cout<<matrice_adiacenta[x-1][y-1]<<endl;
  }

  return 0;
}

