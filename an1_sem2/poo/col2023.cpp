#include<iostream>
#include<string>
#include<typeinfo>
#include<vector>
#include<exception>

using namespace std;

void afisareDrumuri();


class Drum{
    inline static vector<string> denumiriLuate;
    string denumire;
    float lungime;
    //!minim 1, iar lungimea tronsoanelor este egala => lungimea unui tronson = lungime/tronsoane
    int tronsoane;

    public:

        // static bool verificareDenumire(string d);
        string getDenumire(){
            return denumire;
        }

        void setDenumire(string d){
            int ok = 0;
            while(ok == 0){
                ok = 1;
                for (string den : denumiriLuate){
                    if(d == den){
                        ok = 0;
                        break;
                    }
                }
                if (ok == 0){
                    cout<<"Aceasta denumire este deja luata, va rog sa alegeti alta."<<endl;
                    cin>>d;
                }
            }
            denumire = d;
            denumiriLuate.push_back(d);
        }
        void setLungime(float l){
            lungime = l;
        }
        void setTronsoane(int t){
            while (t < 1){
                cout<<"Trebuie sa existe minim un tronson. Mai introduceti o data numarul. ";
                cin>>t;
                cout<<endl;
            }
            tronsoane = t;
        }
        
        int getTronsoane(){
            return tronsoane;
        }

        friend istream& operator>>(istream& in, Drum& drum);
        friend ostream& operator<<(ostream& os, Drum& drum);

};

// static bool Drum::verificareDenumire(string d){
//     for(string den : Drum::denumiriLuate){
//         if (den == d){
//             return false;
//         }
//     }
//     return true;
// }

istream& operator>>(istream& in, Drum& drum){
    string d;
    cout<<"Care este numele drumului? ";
    in>>d;
    drum.setDenumire(d);
    cout<<endl;
    float l;
    cout<<"Care este lungimea drumului? ";
    in >> l;
    drum.setLungime(l);
    cout<<endl;
    int t;
    cout<<"Cate tronsoane are drumul? ";
    in>>t;
    drum.setTronsoane(t);
    cout<<endl;
    return in;
}
ostream& operator<<(ostream& os, Drum& drum){
    os <<"Numele drumului: "<< drum.denumire<<endl;
    os<<"Lungime: "<<drum.lungime<<endl;
    os<<"Tronsoane: "<<drum.tronsoane<<endl;
    return os;
}

class DrumNational:virtual public Drum{
    int numarJudete;
};

class DrumEuropean:virtual public Drum{
    int numarTari;
};

class Autostrada:virtual public Drum{
    //!minim 2
    int numarBenzi;
};

class AutostradaEuropeana:public DrumEuropean, public Autostrada{

};

class Meniu;

vector<Drum> drumuriGlobale;


class Contract{
    inline static int id=0;
    int idPersonal = -1;
    string nume;
    string CIF;
    string drumCorespunzator;
    int tronsonCorespunzator;
    
    public:
        friend istream& operator>>(istream& in, Contract& c);
        friend ostream& operator<<(ostream& out, Contract& c);
        friend bool verificareContract(Contract&c);
};

istream& operator>>(istream& in, Contract& c){
    if (drumuriGlobale.size() == 0){
        cout<<"Nu exista drumuri deci nu se poate crea niciuun contract.\n";
        return in;
    }
    int indexDrum;
    cout<<"Carui drum ii corespunde?(Alegeti indexul)"<<endl;
    afisareDrumuri();
    in>>indexDrum;
    string drum;
    drum = drumuriGlobale[indexDrum-1].getDenumire();
    cout<<"Acest drum are "<<drumuriGlobale[indexDrum-1].getTronsoane()<<" tronsoane. Carui tronson ii corespunde acest contrat? ";
    int tronson;
    in>>tronson;
    if(!verificareContract(c)){
        cout<<"Drumul si tronsonul acesta au deja un contract corespunzator\n";
        return in;
    }
    c.drumCorespunzator = drum;
    c.tronsonCorespunzator = tronson;
    c.idPersonal = Contract::id++;
    cout<<"Care este numele contractului? ";
    in>>c.nume;
    cout<<"Care este CIF-ul contractului? ";
    in>>c.CIF;
    cout<<endl;
    return in;

}

ostream& operator<<(ostream& out, Contract& c){
    if(c.idPersonal == -1){
        cout<<"Nu exista acest contract.\n";
        return out;
    }
    out<<"Acesta este contractul "<<c.idPersonal<<", cu numele "<<c.nume<<". El corespunde tronsonului ";
    out<<c.tronsonCorespunzator<<" al drumului "<<c.drumCorespunzator<<".\n";
    return out;
}

vector<Contract> contracteGlobale;

bool verificareContract(Contract& c){
    for(Contract contract : contracteGlobale){
        if (contract.drumCorespunzator == c.drumCorespunzator){
            if(contract.tronsonCorespunzator == c.tronsonCorespunzator){
                return false;
            }
        }
    }
    return true;
}

//! Clasa singleton
class Meniu{
    inline static Meniu* instanta;
    Meniu(){}
    Meniu(Meniu& cp) = delete;
    Meniu operator=(Meniu& cp) = delete;
    public:
        static Meniu* getInstanta(){
            if(!instanta){
                instanta = new Meniu();
            }
            return instanta;
        };


        void citireDrumuri();
        void citireContracte();
        void afisareContracte();
};

void Meniu::citireDrumuri(){
    int nrDrumuri; 
    cout<<"Cate drumuri vreti sa cititi? ";
    cin>>nrDrumuri;
    cout<<endl;
    for (int i = 0; i < nrDrumuri; i++){
        Drum nou;
        cin>>nou;
        drumuriGlobale.push_back(nou);
    }
}

void Meniu::citireContracte(){
    int nrContracte; 
    cout<<"Cate contracte vreti sa cititi? ";
    cin>>nrContracte;
    cout<<endl;
    for (int i = 0; i < nrContracte; i++){
        Contract nou;
        cin>>nou;
        contracteGlobale.push_back(nou);
    }
}
void Meniu::afisareContracte(){
    for (Contract contract : contracteGlobale){
        cout<<contract;
    }
}

void afisareDrumuri(){
    for(Drum drum : drumuriGlobale){
        cout<<drum.getDenumire()<<endl;
    }
}


int main(){
    
    Meniu* meniu = Meniu::getInstanta();
    // meniu->citireDrumuri();
    Contract a;
    cin>>a;
    cout<<a;


    return 0;
}