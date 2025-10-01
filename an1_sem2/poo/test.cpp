//!!! CAUTA DESPRE UPCASTING SI DOWNCASTING


#include<iostream>
using namespace std;

class A{
    int ceva;

    public:
        A(){
            cout<<"s a creat a"<<endl;
        }
        A(int ceva){
            this->ceva = ceva;
            cout<<"ceva = "<<this->ceva<<endl;
        }
        void afisare(){
            cout<<"da"<<endl;
        }
        void showCeva(){
            cout<<this->ceva<<endl;
        }
};


class B: public A{
    int cevaB;
    public:
        B(): A(){
            cevaB=0;
        }
        void afis(){
            cout<<"nu"<<endl;
        }
        B(int ceva): A(ceva){
            cout<<"ye"<<endl;
            cevaB=1;
        }
        void cacat();
};

class C{
    static int y;
    public:
        int x;
        void afisareNimic(){cout<<"functia asta nu afiseaza nimic"<<endl;};
        C(int val){x = val;};
        void afis(){
            cout<<x;
        }
        C(C &ob){
            x = ob.x;
            cout<<"copiat "<<x<<endl;
        }

        static void show(){cout<<y;}
        C operator+(C operand);
        C& operator+=(C operand);
};

int C::y = 20;
C C::operator+(C operand){
    C temp(0);
    temp.x = x + operand.x;
    return temp;
}

C& C::operator+=(C operand){
    x += operand.x;
    return *this;
}


void B::cacat(){
    cout<<cevaB<<endl;
}

class Forma{
    protected:
        int h;
    public:
        Forma(int hh){h = hh;};
        Forma(const Forma& ob): h(ob.h){};
        void afisare(){
            cout<<"h este "<<h<<endl;
        }
        void schimbareH(){cout<<"schimb h"<<endl;};
};

class Cerc:public Forma{
    protected:
        float raza;
    public:
        Cerc(float r):Forma(0){raza=r;};
        Cerc(const Cerc& ob):Forma(ob), raza(ob.raza){};
        void afisareRaza(){
            cout<<"raza este "<<raza<<endl;
        }
        void schimbareH(){
            Forma::schimbareH();
            h = 23;
        }
};

int imp

int main(){

    Cerc a(2.3);
    Cerc b(a);
    b.schimbareH();
    b.afisare();
    b.afisareRaza();


    return 0;
}


Base::f()
1