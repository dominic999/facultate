#include <iostream>
using namespace std;

int main(){
  int n;
  int numere[100000];

  for (int i = 0; i < n; i++){
    int x,y;
    cin>>x>>y;
    numere[i] = x+y;
  }
  for(int i = 0; i < n; i++){
    cout<<numere[i]<<endl;
  }

  return 0;
}
