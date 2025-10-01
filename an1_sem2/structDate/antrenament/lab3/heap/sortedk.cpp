#include<iostream>
#include<vector>
using namespace std;


void afisare(vector<int> vec){
    for(int c:vec){
        cout<<c<<" ";
    }
    cout<<endl;
}

void insert(vector<int> &heap, int val){
    heap.push_back(val);
    int index = heap.size()-1;
    int parinte = (index-1)/2;
    while(parinte!=0 && heap[parinte] > heap[index]){
        int temp = heap[index];
        heap[index] = heap[parinte];
        heap[parinte] = temp;
        index = parinte;
        parinte = (parinte-1)/2;
    }
    //! Verific pentru radacina
    if(heap[parinte] > heap[index]){
        int temp = heap[index];
        heap[index] = heap[parinte];
        heap[parinte] = temp;
    }
}


void extragereMinim(vector<int> &heap){
    int l = heap.size() - 1;
    heap[0] = heap[l];
    heap.pop_back();
    int index = 0, st=1, dr=2;
    int minim = min(heap[1], heap[2]);
    while (st < l && minim < heap[index]){
        if(minim == heap[st]){
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
            minim = heap[st];
        }
        if(dr < l){
            minim = min(minim, heap[dr]);
        }
    }
}


void heapify(vector<int> &heap){
    int l = heap.size();
    int rad = (l-2)/2;
    int st;
    int dr;
    int minim;
    //! Eu vreau sa ma uit la radacina si sa o cobor cat este nevoie

    while(rad >= 0){
        int cpRad = rad;
        st = rad*2+1;
        dr = rad*2+2;
        minim = heap[st];
        if(dr < l){
            minim = min(minim, heap[dr]);
        }
        while(minim < heap[rad] && st<l){
            if(minim == heap[st]){
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
                minim = heap[st];
            }
            if(dr < l){
                minim = min(minim, heap[dr]);
            }
        }
        rad = cpRad-1;
    }
}


int main(){

    return 0;
}