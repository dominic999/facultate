#include<iostream>
#include<cmath>

using namespace std;

//!Problema 1
// struct Node{
//     Node* next = nullptr;
//     string val;
// };

// void adaugare(Node* &head, string valoare){
//     Node* nou = new Node;
//     nou->next = head;
//     nou->val = valoare;
//     head = nou;
// }

// void scoatere(Node* &head){
//     Node *temp = head;
//     head = head->next;
//     delete(temp);
// }

// void afisare(Node* head){
//     cout<<head->val;
// }


// int main(){

//     int nrComenzi;
//     cin>>nrComenzi;
//     Node* head = new Node();
//     head->val = "/";
//     // string afisari[100000];
//     // int counter = 0;
    
    
//     for (int i = 0; i < nrComenzi; i++){
//         string comanda;
//         cin>>comanda;
//         if(comanda == "cd"){
//             string numeDirector;
//             cin>>numeDirector;
//             if(numeDirector == ".." && head->val != "/"){
//                 scoatere(head);
//             }else if(numeDirector != ".."){
//                 adaugare(head, numeDirector);
//             }
//         }else{
//             afisare(head);
//             cout<<endl;
//         }
//     }
//     delete(head);

//     return 0;
// } 

//!Problema 2

int abs(int x){
    if(x<0){
        return -1*x;
    }
    return x;
}


//? daca inca nu s a umplut
void adaugareHeap(int *ve, int val, int index, int x){
    ve[index] = val;
    while ((index-1)/2!=0 && (abs(ve[(index-1)/2]-x) < abs(ve[index]-x) || 
        (abs(ve[(index-1)/2]-x) == abs(ve[index]-x) && ve[index-1]/2 < ve[index]))){
        int temp = ve[(index-1)/2];
        ve[(index-1)/2] = ve[index];
        ve[index] = temp;
        index = (index-1)/2;
    }
    if((abs(ve[(index-1)/2]-x) < abs(ve[index]-x) || 
        (abs(ve[(index-1)/2]-x) == abs(ve[index]-x) && ve[index-1]/2 < ve[index]))){
        int temp = ve[(index-1)/2];
        ve[(index-1)/2] = ve[index];
        ve[index] = temp;
        index = (index-1)/2;
    }
   

}

//? daca s a umplut
void mentinereHeap(int *ve, int val, int lungime, int x){
    int counter = 0;
    if(abs(ve[counter]-x) > abs(val-x) || 
        (abs(ve[counter]-x) == abs(val-x) && val < ve[counter])){

        ve[counter] = val;
        int maxim;
        if (lungime >=2 ){
            if(lungime >= 3){
                maxim = max(abs(ve[counter*2+1]-x), abs(ve[counter*2+2]-x));
            }else{
                lungime = abs(ve[counter*2+1]-x);
            }
        }
        //!Continui cat timp exista copil stang
        while(counter*2+1 <= lungime-1){
            //?verific daca exista copil drept
            if(maxim == abs(ve[counter*2+1]-x)){
                ve[counter] = ve[counter*2+1];
                ve[counter*2+1] = val;
                counter = counter*2+1;
            }else{
                ve[counter] = ve[counter*2+2];
                ve[counter*2+2] = val;
                counter = counter*2+2;

            }
            if(counter*2 + 1 <= lungime){
                if(counter*2+2 <= lungime){
                    maxim = max(abs(ve[counter*2+1]-x), abs(ve[counter*2+2]-x));
                }else{
                    maxim = abs(ve[counter*2+1]-x);
                }
            }
        }
        
    }
}



int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int v[n];
    int heap[k] = {0};
    for(int i= 0; i < n ; i ++){
        cin>>v[i];
    }
    
    
    int counter = 0;
    for (int i = 0; i < n; i++){
        if(counter < k){
            adaugareHeap(heap, v[i], counter++, x);
        }
        else{
            mentinereHeap(heap,v[i],k,x);
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < k; i++){
        cout<<heap[i]<<" ";
    }

    return 0;
}