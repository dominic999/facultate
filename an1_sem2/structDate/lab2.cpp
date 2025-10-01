//!Problema celui mai mare dreptunghi
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("inaltimi.in");

int main(){
    int n;
    fin>>n;
    int inaltimi[n];
    for (int i =0; i < n; ++i){
        fin>>inaltimi[i];
    }

    int ns[n] = {-2};
    int ps[n] = {-2};

    for(int i = 0; i < n; i++){
        cout<<inaltimi[i]<<"\n";
    }

    for (int i=0; i < n; i++){
        int okP = 0;
        int okN = 0;
        for(int j = 0; j < n; j++){

            if(j == n-1 && okN==0){
                if(inaltimi[j] > inaltimi[i]){
                    ns[i] = n;
                    okN=1;
                }
            }

            if(j == 0 && okP == 0){
                if(inaltimi[j] > inaltimi[i]){
                    ps[i]=-1;
                    okP = 1;
                }
            }
            
            if(i == n-1){
                ns[i] = n;
            }

            if(inaltimi[j] < inaltimi[i]){
                if(j < i ){
                    ps[i] = j;
                }
                if(j > i && okN==0){
                    ns[i] = j;
                    okN=1;
                }
            }

            if(i == 0){
                ps[i] = -1;
            }
        }
    }

    int rez[n];
    int max = 0;

    for(int i = 0; i<n; i++){
        cout<<"ns["<<i<<"]: "<<ns[i]<<endl;
        cout<<"ps["<<i<<"]: "<<ps[i]<<endl;
    }

    for(int i=0; i<n; i++){
        if(ns[1]!=-2 && ps[i]!=-2){
            rez[i] = inaltimi[i]*(ns[i]-ps[i]-1);
            cout<<"rezultatul "<<i<<" este "<<rez[i]<<endl;
        }else{
            rez[i] = -1;
        }
        if(rez[i] > max){
            max = rez[i];
            cout<<"max: "<<max<<endl;
        }
    }
    cout<<max<<"\n";

    return 0;
}
