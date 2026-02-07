#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("input.in");

int main(){
  int n,m;
  const long long inf = (long long) 4e18;
  cin>>n>>m;
  vector<vector<long long>> d(n, vector<long long>(n, inf));
  vector<vector<int>> p(n, vector<int>(n, -1));
  for(int i = 0; i < n; i++){
    d[i][i] = 0;
  }
  for(int i = 0; i < m; i++){
    int a,b;
    long long c;
    cin>>a>>b>>c;
    long long cost = min(c, d[a-1][b-1]);
    d[a-1][b-1] = cost;
    p[a-1][b-1] = b-1;
  }
  for(int k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      if(d[i][k] == inf)
        continue;
      for(int j = 0; j < n; j++){
        if(d[k][j] == inf)
          continue;
        if(d[i][k] + d[k][j] < d[i][j]){
          d[i][j] = d[i][k] + d[k][j];
          p[i][j] = p[i][k];
        }
      }
    }
  }

  int nod_neg = -1;
  for(int i = n-1; i >= 0; i--){
    if(d[i][i] < 0){
      nod_neg = i;
      break;
    }
  }
  int cur = nod_neg;
  if(nod_neg == -1){
    cout<<"NO";
    return 0;
  }
  cout<<"YES"<<endl;
  do{
    cout<<cur+1<<" ";
    cur = p[cur][nod_neg];
  }while(cur != nod_neg && cur != -1);
  cout<<cur+1;

  return 0;
}
