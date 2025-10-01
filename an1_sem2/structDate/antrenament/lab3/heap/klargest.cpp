#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &heap){
    int l = heap.size();
    int rad = (l-2)/2;
    int st;
    int dr;
    int maxim;
    //! Eu vreau sa ma uit la radacina si sa o cobor cat este nevoie

    while(rad >= 0){
        int cpRad = rad;
        st = rad*2+1;
        dr = rad*2+2;
        maxim = heap[st];
        if(dr < l){
            maxim = max(maxim, heap[dr]);
        }
        while(maxim > heap[rad] && st<l){
            if(maxim == heap[st]){
                int temp = heap[st];
                heap[st] = heap[rad];
                heap[rad] = temp;
                rad = st;
            }else{
                int temp = heap[dr];
                heap[dr] = heap[rad];
                heap[rad] = temp;
                rad = dr;
            }
            st = rad*2+1;
            dr = rad*2+2;
            if(st < l){
                maxim= heap[st];
            }
            if(dr < l){
                maxim = max(maxim, heap[dr]);
            }
        }
        rad = cpRad-1;
    }
}

void afisare(vector<int> vec){
    for(int c:vec){
        cout<<c<<" ";
    }
    cout<<endl;
}


void extragereMaxim(vector<int> &heap){
    int l = heap.size() - 1;
    heap[0] = heap[l];
    heap.pop_back();
    int index = 0, st=1, dr=2;
    int maxim = max(heap[1], heap[2]);
    while (st < l && maxim > heap[index]){
        if(maxim == heap[st]){
            int temp = heap[st];
            heap[st] = heap[index];
            heap[index] = temp;
            index = st;
        }else{
            int temp = heap[dr];
            heap[dr] = heap[index];
            heap[index] = temp;
            index = dr;
        }
        st = index*2+1;
        dr = index*2+2;
        if(st<l){
            maxim = heap[st];
        }
        if(dr < l){
            maxim = max(maxim, heap[dr]);
        }
    }
}



int solutie(vector<int> &heap, int k){
    heapify(heap);
    vector<int> sol;
    while(sol.size() < k){
        sol.push_back(heap[0]);
        extragereMaxim(heap);
    }
    return sol[sol.size()-1];
}


int main(){

    vector<int> a = {1};
    cout<<solutie(a,1)<<endl;

    return 0;
}