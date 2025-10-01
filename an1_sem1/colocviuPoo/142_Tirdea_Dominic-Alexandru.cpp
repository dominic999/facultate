//Tirdea Dominic Alexandru - grupa 142
//Clang si -std=c++17
//Campian R.

#include<iostream>
#include<vector>
#include<list>
#include<typeinfo>
#include<exception>
#include<string>

using namespace std;

class Produs{
    protected:
        string name;
        int gramaj;
        float energie;
    public:
        Produs(){};
        Produs(string n, int g, float e):name(n),gramaj(g),energie(e){};
        virtual void calculareEnergie(){};
        float getEnergie(){
            return energie;
        }
        virtual void citireProdus(){
            cout<<"Care este numele produsului? ";
            cin>>name;
            cout<<endl<<"Ce gramaj are? ";
            cin>>gramaj;
            cout<<endl;
        }
};

class Bautura: virtual public Produs{
    bool sticla;
    public:
        Bautura():Produs(){};
        Bautura(string n, int g, float e, bool s):Produs(n,g,e),sticla(s){};
        void citireProdus() override {
            Produs::citireProdus();
            string st;
            cout<<"Este la sticla?(y/n) ";
            cin>>st;
            cout<<endl;
            if(st == "y"){
                sticla = true;
                this->calculareEnergie();
                return ;
            }
            sticla = false;
            this->calculareEnergie();
        }
        void calculareEnergie() override{
            if (sticla){
                energie = 25;
            }
            energie =  (0.25*gramaj);
        }
};

class Desert: virtual public Produs{
    inline static vector<string> metodeDeServire = {"felie","cupa","portie"};
    string metodaServire;
    public:
        Desert(string n, int g, float e, string ms):Produs(n,g,e){
            int ok = 0;
            while(ok == 0){
                for (string met : metodeDeServire){
                    if(met == ms){
                        ok = 1;
                    }
                }   
                if(ok == 0){
                    cout<<"Va rog sa alegeti una din urmatoarele metode de servire:\n";
                    cout<<"1.felie\n2.cupa\n3.portie\n";
                    cin>>ms;
                    cout<<endl;
                }
            }
            metodaServire = ms;
        };
        Desert(){};
        void citireProdus(){
            Produs::citireProdus();
            int ok = 0;
            cout<<"Care este metoda de servire?\n";
            cout<<"1.felie\n2.cupa\n3.portie\n";
            string ms;
            cin>>ms;
            cout<<endl;
            while(ok == 0){
                for (string met : metodeDeServire){
                    if(met == ms){
                        ok = 1;
                    }
                }   
                if(ok == 0){
                    cout<<"Va rog sa alegeti una din urmatoarele metode de servire:\n";
                    cout<<"1.felie\n2.cupa\n3.portie\n";
                    cin>>ms;
                    cout<<endl;
                }
            }
            metodaServire = ms;

        }
        void calculareEnergie() override {
            if(metodaServire == "felie"){
                energie = 25;
            }else if(metodaServire == "portie"){
                energie = (0.5*gramaj);
            }
            energie = (2*gramaj);
        }
};

class Burger: virtual public Produs{
    vector<string> ingrediente;
    public:
        void calculareEnergie() override{
            energie = (gramaj* ingrediente.size() * 0.25);
        }
        void citireProdus() override{
            Produs::citireProdus();
            string ok;
            string ingredient;
            do{
                cout<<"Adaugati ingredient?(y/n) ";
                cin>>ok;
                cout<<endl;
                cout<<"Cum se numeste ingredientul? ";
                cin>>ingredient;
                ingrediente.push_back(ingredient);
                cout<<endl;
            }while(ok == "y");
        }
};

class Comanda{
    inline static int id=0;
    int idPersonal;
    vector<Produs*> produse;
    float energieTotala;
    public:
        Comanda(){idPersonal=id++;};
        void adaugaProdus(Produs produs){
            produse.push_back(&produs);
        }
        void calcuareEnergie(){
            for (Produs* produs : produse){
                energieTotala+=produs->getEnergie();
            }
        }
        float getEnergie(){
            return energieTotala;
        }
        friend istream& operator>>(istream& is, Comanda& ob);
};

istream& operator>>(istream& is, Comanda& ob){
    string adaugareProdus;
    vector<Produs*> produseActuale;
    do{
        cout<<"Doriti sa adaugati un produs?(y/n) ";
        is>>adaugareProdus;
        cout<<endl;
        if(adaugareProdus == "y"){
            string tipProdus;
            cout<<"Ce fel de produs este?\n";
            cout<<"1.bautura\n2.desert\n3.burger\n";
            is>>tipProdus;
            cout<<endl;
            Produs* inlocuitor;
            if(tipProdus == "bautura"){
                Bautura* bautura = new Bautura();
                bautura->citireProdus();
                inlocuitor = bautura;
                produseActuale.push_back(inlocuitor);
            }else if(tipProdus == "desert"){
                Desert* desert = new Desert();
                desert->citireProdus();
                inlocuitor = desert;
                produseActuale.push_back(inlocuitor);
            }else if(tipProdus == "burger"){
                Burger* burger = new Burger();
                burger->citireProdus();
                inlocuitor = burger;
                produseActuale.push_back(inlocuitor);
            }
        }

    }while(adaugareProdus == "y");
    ob.produse = produseActuale;
    cout<<endl;
    ob.calcuareEnergie();
    return is;
}

//Clasa singleton
class Meniu{
    inline static Meniu* instanta;
    Meniu() = default;
    vector <Produs> produse;
    Meniu(Meniu& cp) = delete;
    Meniu* operator=(Meniu& ob) = delete;
    public:
        static Meniu* getInstanta(){
            if(!instanta){
                instanta = new Meniu();
            }
            return instanta;
        }
};

class Angajat{
    protected: 
        float energie = 100;
    public: 
        virtual int preluareComanda(){return 1;};
        virtual int preparareComanda(){return 1;};
        virtual int livrareComanda(){return 1;};
        float getEnergie(){
            return energie;
        }
};

class Casier: public Angajat{
    public:
        int preluareComanda() override{
            return energie-25;
        }
        int preparareComanda() override{
            return 0;
        }

};

class Livrator: public Angajat{

};

class Bucatar: public Angajat{

};

vector<Casier*> casieri;
vector<Livrator*> livratori;
vector<Bucatar*> bucatari;
vector<Angajat*> angajati;

//Meniul interactiv
class MeniuOptiuni{
    inline static MeniuOptiuni* instanta;
    MeniuOptiuni() = default;
    MeniuOptiuni(MeniuOptiuni& cp) = delete;
    MeniuOptiuni* operator=(MeniuOptiuni& ob) = delete;
    public:
        static MeniuOptiuni* getInstanta(){
            if(!instanta){
                instanta = new MeniuOptiuni();
            }
            return instanta;
        }

        void afisareOptiuni(){
            cout<<"Ce actiune doriti sa faceti?\n";
            cout<<"0.Quit\n";
            cout<<"1.Afisare numar de angajati\n";
            cout<<"2.Simulare ciclu\n";
        }

};

//aici afisez numarul de angajati
void afisareNumarAngajati(string tip){
    if(tip == "casieri"){
        cout<<"Sunt "<<casieri.size()<<" casieri.\n";
    }else if(tip == "livratori"){
        cout<<"Sunt "<<livratori.size()<<" livratori.\n";
    }else if(tip == "bucatari"){
        cout<<"Sunt "<<bucatari.size()<<" bucatari.\n";
    }
}

int calculareEnergieAngajati(){
    int cv = 0;
    for (Angajat* an : angajati){
        cv+=an->getEnergie();
    }
    return cv;
}

void ciclu(){
    //prima oara citesc comenzile
    string citireComanda = "y";
    Comanda comandaNoua;
    vector<Comanda> comenziActuale;
    vector<Comanda> comenziPreluate;
    float energieAngajati = calculareEnergieAngajati();

    //aici citesc comenziile
    while (citireComanda == "y"){
        cout<<"Doriti sa adaugati o comanda(y/n): ";
        cin>>comandaNoua;
        comenziActuale.push_back(comandaNoua);
        cout<<endl;
    }

    float energieComanda;
    for (Comanda c : comenziActuale){
        energieComanda += c.getEnergie();
    }

    // while(energieAngajati > energieComanda){

    // }

}



int main(){
    
    int instr = 100;
    MeniuOptiuni* mo = MeniuOptiuni::getInstanta();
    while (instr != 0){
        mo->afisareOptiuni();
        cin>>instr;
        cout<<endl;
        if (instr == 1){
            afisareNumarAngajati;
        }else if(instr == 2){
            ciclu();
        }
    }
    return 0;
}