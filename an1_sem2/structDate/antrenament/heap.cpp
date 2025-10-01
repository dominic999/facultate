#include<iostream>

using namespace std;


void adaugare(int *v, int lungime, int val, int x){
    int indexActual = lungime;
    v[indexActual] = val;
    int indexParinte = (indexActual-1)/2;
    int actual = v[indexActual];
    int parinte = v[indexParinte];
    int relActual = abs(actual-x);
    int relParinte = abs(parinte-x);
    while(indexParinte != 0){
        if(relActual > relParinte || (relActual == relParinte && parinte < actual)){
            int temp = actual;
            v[indexActual] = parinte;
            v[indexParinte] = temp;
            indexActual = indexParinte;
            indexParinte = (indexParinte-1)/2;
            actual = v[indexActual];
            parinte = v[indexParinte];
            relActual = abs(actual-x);
            relParinte = abs(parinte-x);
        }else{
            break;
        }
    }
    //! Aici verific pentru radacina
    if(relActual > relParinte || (relActual == relParinte && parinte < actual)){
        int temp = v[indexActual];
        v[indexActual] = parinte;
        v[indexParinte] = temp;
    }
}


void remodelare(int *heap, int lungime, int val, int x){

    //! Prima oara verific daca este mai "bun" decat radacina
    int relVal = abs(val - x);
    int index = 0;
    int actual = heap[index];
    int relActual = abs(actual - x);
    if(relActual > relVal || (relActual == relVal && actual > val)){
        heap[index] = val;
        actual = heap[index];
        relActual = abs(actual - x);
        int st, dr, indexSt, indexDr, maxim, indexMaxim;
        int relSt, relDr, relMax;
        indexSt = index*2+1;
        //! Acum verific daca trebuie sa ma duc in jos
        while (indexSt < lungime){
            st = heap[indexSt];
            relSt = abs(st - x);
            indexDr = indexSt + 1;
            if (indexDr < lungime){
                dr = heap[indexDr];
                relDr = abs(indexDr - x);
                relMax = max(relDr, relSt);
                if(relMax == relDr){
                    indexMaxim = indexDr;
                    maxim = dr;
                }else{
                    indexMaxim = indexSt;
                    maxim = st;
                }
            }
            //! Dac am ajuns aici inseamna ca nu exiosta fiu drept, deci am ajuns la final
            else{
                if(relActual < relSt || (relActual == relSt && st > actual)){
                    heap[indexSt] = actual;
                    heap[index] = st;
                    break;
                }
            }

            //! Aici verfic daca doi fii si modific 
            if(relMax > relActual || (relMax == relActual && maxim > actual)){
                heap[indexMaxim] = actual;
                heap[index] = maxim;
                index = indexMaxim;
                indexSt = index*2+1;
            }
        }

    }

}


int main(){

    int n,k,x;
    cin>>n>>k>>x;
    int heap[k];
    int v[n];
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    int counter = 0;
    for (int i = 0; i < n; i++){
        if (counter < k){
            adaugare(heap, counter, v[i], x);
            counter++;
        }
        else{
            remodelare(heap, k, v[i], x);
        }
    }
    for(int i = 0; i < k; i++){
        cout<<heap[i]<<" ";
    }

    return 0;
}
