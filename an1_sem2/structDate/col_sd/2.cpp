#include<iostream>
#include<vector>
using namespace std;

void inserare(vector<int> &heap, int val){
	heap.push_back(val);
	int l = heap.size() - 1;
	int par = (l-1)/2;
	while(par >= 0 && heap[par] > heap[l]){
		int temp = heap[l];
		heap[l] = heap[par];
		heap[par] = temp;
		l = par;
		par = (l-1)/2;
	}
}

int gasireVal(vector<int> a, int val){
	for (int i =0; i < a.size(); i++){
		if(a[i] == val){
			return i;
		}
	}
	return -1;
}



int rezolvare(vector<int> &heap, vector<int> &rez){
	while(rez.size() != 1){
		rez={};
    while(heap.size() > 1){
				cout<<"am intrat"<<endl;
        int minim = heap[1];
        if(heap.size() > 2){
            minim = min(minim, heap[2]);
        }
				int deIn = heap[0]+minim;
        if (minim == heap[1]){
            heap.erase(heap.begin()+1);
        }else{
            heap.erase(heap.begin()+2);
        }
				heap.erase(heap.begin());
				inserare(heap, deIn);
				inserare(rez, deIn);
		}
		heap = rez;
	}
    return rez[0];
}

int main(){
	int n;
  cin>>n;
  int v[n];
  for(int i=0; i<n; i++){
      cin>>v[i];
  }
  vector<int> heap;
  for(int i=0; i < n; i++){
      inserare(heap, v[i]);
  }
  vector<int> rez;
  int s = rezolvare(heap, rez);
  cout<<s;
	
	return 0;
}
