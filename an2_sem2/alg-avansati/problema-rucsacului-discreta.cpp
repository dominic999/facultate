#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;


void my_mergesort(pair<float, int> array[], int st, int dr, int n){

  if(st >= dr){
    return ;
  }
  int mij = (st+dr)/2;
  my_mergesort(array, st, mij, mij-st+1);
  my_mergesort(array, mij+1, dr, dr-mij);
  pair<float, int> tmp[n];

  int st_plus = 0;
  int dr_plus = 0;
  int i = 0;
  while (i < n && st_plus < mij-st+1 && dr_plus < dr-mij){
    if (array[st+st_plus].first < array[mij+1+dr_plus].first){
      tmp[i] = array[st+st_plus];
      st_plus++;
    }else{
      tmp[i] = array[mij+1+dr_plus];
      dr_plus++;
    }
    i++;
  }
  while (st_plus < mij-st+1){
    tmp[i] = array[st+st_plus];
    i++;
    st_plus++;
  }
  while (dr_plus < dr-mij){
    tmp[i] = array[mij+1+dr_plus];
    dr_plus++;
    i++;
  }
  for(int i = 0; i < n; i++){
    array[st+i] = tmp[i];
  }

}


int main(){
  int n;
  int c;
  cin>>n;
  cin>>c;
  int greutati[1000];
  int valori[1000];
  pair<int, int> obiecte[1000];
  int nr_maxim = 0;
  for (int i = 0; i < n; i++){
    int x;
    cin>>x;
    valori[i]=x;
    if(valori[i] > nr_maxim)
      nr_maxim = valori[i];
  }
  for (int i = 0; i < n; i++){
    int x;
    cin>>x;
    greutati[i]=x;
    obiecte[i].first = valori[i];
    obiecte[i].second = greutati[i];
  }
  pair<float, int> profit[1000];
  for (int i = 0; i < n; i++){
    profit[i].first = (float) valori[i] / greutati[i];
    profit[i].second = i;
  }

  // for(int i = 0; i < n; i++){
  //   cout<<profit[i].first << " "<< profit[i].second<<endl;
  // }
  my_mergesort(profit, 0, n-1, n);
  for(int i = 0; i < n; i++){
    cout<<profit[i].first<<" ";
  }
  int s = 0;
  for (int i =1 ; i <= n; i++){
    if ( c - greutati[profit[n-i].second] >= 0 ){
      c -= greutati[profit[n-i].second];
      s += valori[profit[n-i].second];
    }
  }

  s = max(s, nr_maxim);
  cout<<s<<endl;
  return 0;
}
