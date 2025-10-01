//!Am introdus un derivat de la preparat, desert si cocktail
//!Am introdus clasa abastracta Persoana si derivatele Client si angajat
//!Am creat clasa singleton manager
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <exception>
using namespace std;


class NuDesert: public exception{
    public:
        const char* what() const noexcept override{
            return "Acesta nu este un desert\n";
        }
};

class NuCocktail: public exception{
    public:
        const char* what() const noexcept override{
            return "Acesta nu este un cocktail\n";
        }
};


class Manager{
    inline static Manager* instanta = nullptr;
    inline static string nume;
    Manager(){cout<<"S-a creat managerul";};
    Manager(Manager& ) = delete;
    Manager& operator=(const Manager&) = delete;
    public:
        static Manager* creareInstanta(){
            if(!instanta){
                cout<<"Cum il cheama? ";
                cin>>nume;
                instanta = new Manager();
                cout<<endl;
            }
            else{cout<<"Exista deja si il cheama "<<nume<<endl;};
            return instanta;
        }
};


class Persoana{

    public:
        virtual void afisare() const = 0;
};

class Client: public Persoana{
    const bool clientRegulat;
    const string preparatPreferat;
    public:
        Client(bool cR, string pP)
            :clientRegulat(cR),
            preparatPreferat(pP) {
            cout<<"Acest client este ";
            if (clientRegulat){
                cout<<"regulat. ";
            }else{
                cout<<"neregulat. ";
            }
            cout<<"Preparatul lui preferat este "<<pP<<".";
        }
        void afisare() const override {
            cout<<"Aceasta persoana este un client";
        }
};

class Angajat: public Persoana{
    inline static const list<string> tipuriAngajat = {"chelner", "bucatar", "manager", "barman"};
    string tip;
    const int salariu;
    public:
        Angajat(string t, int s):tip(t),salariu(s){
            cout<<"Acest angajat este un "<<tip<<" si are selariul "<<salariu<<endl;
        };
        void afisare() const override {
            cout<<"Aceasta persoana este un "<<tip<<endl;
        }
};

class Preparat{

    string nume;
    float pret;
    int timp;
    static int ok;

    public:

        Preparat(){
            cout<<"S-a creat un nou preparat.\n";
        }
        
        Preparat(string nume, float pret, int timp){

            this->nume = nume;
            this->pret = pret;
            this->timp = timp;

            cout<<"Preparatul dumneavostra se numeste "<<nume<<", costa "<<pret<<" lei si dureaza ";
            cout<<timp<<" ore.\n";
        }

        Preparat(Preparat &preparat){
            cout<<"S-a creat o copie la "<<preparat.getNume()<<".\n";
        }
        
        ~Preparat(){
            cout<<"Preparatul a fost distrus.\n";
        }

        Preparat& operator=(Preparat preparatOriginal){
            this->nume = preparatOriginal.getNume();
            this->pret = preparatOriginal.getPret();
            this->timp = preparatOriginal.getTimp();
            return *this;
        }

        Preparat operator+(Preparat& preparatDoi){

            Preparat temp;
            string numeNou = this->nume + " si " + preparatDoi.getNume();
            float pretNou = this->pret + preparatDoi.getPret();
            int timpNou = max(this->timp, preparatDoi.getTimp());
            Preparat nou(numeNou, pretNou, timpNou);
            cout<<"Impreuna aceste doua produse costa "<<(this->pret + preparatDoi.getPret());
            cout<<" si ar dura "<<max(this->timp, preparatDoi.getTimp())<<" ore.\n";

            return temp;

        }

        friend ostream& operator<<(ostream& os, Preparat& preparat);
        friend istream& operator>>(istream& is, Preparat& preparat);


        void setNume(string nume){
            this->nume = nume;
        }
        void setPret(float pret){
            this->pret = pret;
        }
        void setTimp(int timp){
            this->timp = timp;
        }

        string getNume(){
            return nume;
        }
        int getTimp(){
            return timp;
        }
        float getPret(){
            return pret;
        }
        
        virtual void afisareTip(){
            cout<<"Acesta este un preparat"<<endl;
        };
};

ostream& operator<<(ostream& os, Preparat& preparat){
    cout<<"Preparatul se numeste "<<preparat.getNume()<<", costa "<<preparat.getPret()<<" lei si dureaza "<<preparat.getTimp()<<" ore.\n";
    return os;
}

istream& operator>>(istream& is, Preparat& preparat){
    string nume;
    float pret;
    int timp;
    cout<<"Cum se numeste preparatul? ";
    cin>>nume;
    preparat.setNume(nume);
    cout<<"\nCe pret are? ";
    cin>>pret;
    preparat.setPret(pret);
    cout<<"\nCat dureaza sa fie preparat in ore? ";
    cin>>timp;
    preparat.setTimp(timp);
    return is;

}

bool operator>(Preparat& unu, Preparat& doi){
    if(unu.getPret() > doi.getPret()){
        return true;
    }
    return false;

}


class Desert: public Preparat{

    bool areZahar;
    int calorii;

    public:
        Desert():Preparat(){
            cout<<"Acest preparat este un desert.\n";
        }
        Desert(string nume, float pret, int timp, bool areZahar, int calorii)
            : Preparat(nume, pret, timp), areZahar(areZahar),calorii(calorii){};
        Desert(Desert& ob): Preparat(ob), areZahar(ob.areZahar), calorii(calorii){
            cout<<"s a creat o copie la aceste desert "<<endl;
        };
        void setZahar(bool z){
            areZahar = z;
        }
        void setCalorii(int c){
            calorii = c;
        }
        bool getZahar(){
            return areZahar;
        }
        int getCalorii(){
            return calorii;
        }
        
        void afisareTip() override {
            cout<<"Acesta este un desert"<<endl;
        }      

        void operator=(Desert& ob);

};
void Desert::operator=(Desert& ob){
    this->setZahar(ob.getZahar());
    this->setNume(ob.getNume());
    this->setCalorii(ob.getCalorii());
    this->setPret(ob.getPret());
    this->setTimp(ob.getTimp());
}


//!Aici tipPahar trebuie sa faca parte din acea lista tipuriPahare
class Cocktail: public Preparat{
    inline static vector<string> tipuriPahare = {"Delmonico", "Flute", "Wine", "Coupe", "Collins"};
    string tipPahar;
    bool areAlcool;
    public:
        static void adaugarePahar(string pahar){
            tipuriPahare.push_back(pahar);
        }
        Cocktail():Preparat(){
            cout<<"acest preparat este un cocktail"<<endl;
        }
        Cocktail(string n, float p, int t, bool aA, string tP)
            :Preparat(n,p,t),areAlcool(aA),tipPahar(tP){
                int ok = 0;
                while (ok == 0){
                    for (string pahar : tipuriPahare){
                        if(pahar == tP){
                            ok = 1;
                        }
                    }
                    if (ok == 0){
                        cout<<"Trebuie sa alegeti unul dintre tipurile prestabilite: ";
                        int count = 1;
                        for (string p : tipuriPahare){
                            cout<<count<<". "<<p<<endl;
                            count++;
                        }
                        cout<<"Pe care il alegeti? ";
                        cin>>tP;
                        cout<<endl;
                    }
                }
            };
            void setAlcool(bool a){
                areAlcool = a;
            }
            bool getAlcool(){
                return areAlcool;
            }
            void setPahar(string tP){
                int ok = 0;
                while (ok == 0){
                    for (string pahar : tipuriPahare){
                        if(pahar == tP){
                            ok = 1;
                        }
                    }
                    if (ok == 0){
                        cout<<"Trebuie sa alegeti unul dintre tipurile prestabilite: ";
                        int count = 1;
                        for (string p : tipuriPahare){
                            cout<<count<<". "<<p<<endl;
                            count++;
                        }
                        cout<<"Pe care il alegeti? ";
                        cin>>tP;
                        cout<<endl;
                    }
                }
            }
            string getPahar(){
                return tipPahar;
            }

            void afisareTip() override{
                cout<<"Acesta este un cocktail"<<endl;
            }

            void operator=(Cocktail& ob);

};

void Cocktail::operator=(Cocktail& ob){
    this->setAlcool(ob.getAlcool());
    this->setNume(ob.getNume());
    this->setPahar(ob.getPahar());
    this->setPret(ob.getPret());
    this->setTimp(ob.getTimp());
}

template <typename T>
class Cutie {
    T continut;
    string eticheta;

public:
    Cutie(T continut, string eticheta = "Fara eticheta")
        : continut(continut), eticheta(eticheta) {}

    void afiseazaEticheta() const {
        cout << "Eticheta: " << eticheta << endl;
    }

    void afiseazaContinut() const {
        continut.afisareTip();  
    }

    T getContinut() const {
        return continut;
    }

    void setContinut(T nouContinut) {
        continut = nouContinut;
    }
};



class Menu{
    vector<Preparat*> preparate;
    int nrPreparate=0;

    public:
        Menu(){
            cout<<"Cate preparatee sunt la momentul acesta? ";
            cin>>nrPreparate;
            cout<<endl;
        }

        Menu(int nrPreparate){
            this->nrPreparate = nrPreparate;
            for (int i =0; i < nrPreparate; i++){
                Preparat* nou = new Preparat;
                cin>>*nou;
                preparate.push_back(nou);
            }
        }

        Menu(Menu& meniu){
            *this = meniu;
            cout<<"Acest meniu mai exista o data.\n";
        }

        ~Menu(){
            cout<<"Meniu distrus.\n";
            while(preparate.size()!=0){
                delete preparate[preparate.size()-1];
                preparate.pop_back();
            }
        }

        void setNrPreparate(int nrPreparate){
            if(nrPreparate != preparate.size() && preparate.size() != 0){
                if(nrPreparate < preparate.size()){
                    int ok = 0;
                    cout<<"Trebuie sa eliminati "<<preparate.size()-nrPreparate<<" elemente. Este in regula?(0-nu, 1-da)\n";
                    cin>>ok;
                    if(ok == 0){
                        cout<<"Nu se va schimba nimic";
                        return;
                    }else{
                        while(preparate.size() != nrPreparate){
                            cout<<"S-a sters "<<*preparate[preparate.size()-1]<<".";
                            delete preparate[preparate.size() -1];
                            preparate.pop_back();

                        }
                    }
                }
                if(nrPreparate > preparate.size()){
                    int ok = 0;
                    cout<<"Trebuie sa adaugati"<<nrPreparate-preparate.size()<<" elemente. Este in regula?(0-nu, 1-da)\n";
                    cin>>ok;
                    if(ok == 0){
                        cout<<"Nu se va schimba nimic";
                        return;
                    }else{
                        while(preparate.size()<nrPreparate){
                            Preparat* nou = new Preparat;
                            cout<<"Adaugati noul preparat.\n";
                            cin>>*nou;
                            preparate.push_back(nou);
                        }
                    }
                }
            }
            this->nrPreparate = nrPreparate;
        }

        int getNrPreparate(){
            return nrPreparate;
        }

        void setPreparate(){
          
            while(preparate.size() < nrPreparate){
                Preparat* nou = new Preparat;
                cin>>*nou;
                preparate.push_back(nou);
            }

        }

        void afisareMeniu(){
            for(int i = 0; i < nrPreparate; i++){
                cout<<"Preparat "<<i+1<<". "<<preparate[i]->getNume()<<endl;
            }
        }

        void afisarePreparat(int index){
            cout<<"Preparatul "<<index+1<<" este ";
            cout<<preparate[index]->getNume()<<endl;
        }

        void adaugarePreparat(){
            Preparat *preparat = new Preparat; 
            cin>>*preparat;
            preparate.push_back(preparat);
            nrPreparate++;
            cout<<"Noul preparat a fost aduagat\n";
        }

        void eliminarePreparat(int index){
            cout<<"S-a sters preparatul "<<index<<".\n";
            delete preparate[index];
            preparate.erase(preparate.begin() + index);
            nrPreparate--;

        }

};


class Masa{
    int id;
    Menu* meniu;
    bool ocupata;

    public:
        Masa(){
            cout<<"S-a creat o noua masa";
        }
        ~Masa(){
            cout<<"Masa s-a golit";
        }

        void setId(int id){
            this->id = id;
        }
        
        int getId(){
            return id;
        }

        void setMeniu(Menu& meniu){
            this->meniu = &meniu;
        }

        Menu getMeniu(){
           return *meniu;
        }

        void setOcupata(bool ocupata){
            this->ocupata = ocupata;
        }

        bool getOcupata(){
            return ocupata;
        }

        void ocupareMasa(){
            ocupata=true;
        }
        
        void dezocupareMasa(){
            ocupata=false;
        }

};

int meniul ();
void uiMeniu();

vector<Preparat*> preparate;
vector<Masa*> mese;
vector<Menu*> meniuri;

void verificareCocktail(Preparat* deVerificat){
    Cocktail* temp;
    try{
        if(!(temp = dynamic_cast<Cocktail*>(deVerificat))){
            throw NuCocktail();
        }
        cout<<"Este cocktail"<<endl;
    }catch(const NuCocktail er){
        cout<<er.what();
    }
}

void verificareDesert(Preparat* deVerificat){
    Desert* temp;
    try{
        if(!(temp = dynamic_cast<Desert*>(deVerificat))){
            throw NuDesert();
        }
        cout<<"Este desert"<<endl;
    }catch(const NuDesert er){
        cout<<er.what();
    }
}

int main(){
    // int verif = 0;
    // while(verif == 0){
    //     verif = meniul();
    // }
    Cocktail a("martini", 2, 2, true, "Wine");
    Preparat* b = &a;
    a.afisareTip();
    b->afisareTip();
    Preparat *c = new Preparat();
    verificareDesert(b);

    return 0;
}

void uiMeniu() {
	cout<<"+++++++++++++++++++++++++++++++"<<endl;
	cout<<" Introdu 1 pentru a face un nou preparat "<<endl;
	cout<<" Introdu 2 pentru a face un nou meniu "<<endl;
	cout<<" Introdu 3 pentru a face o noua masa"<<endl;
	cout<<" Introdu 4 pentru a adauga un preparat in meniu"<<endl;
	cout<<" Introdu 5 pentru a compara doua preparate dupa pret."<<endl;
	cout<<" Introdu 6 pentru a imbina doua preparate."<<endl;
	cout<<" Introdu 6 pentru a imbina doua preparate."<<endl;
	cout<<" Introdu 7 pentru a scoate un preparat dintr-un meniu."<<endl;
cout<<" Introdu 8 pentru a afisa un preparat dupa index."<<endl;
	cout<<" Introdu 9 pentru a afisa preparatele create pana acum."<<endl;
	cout<<" Pentru a iesi din program apasa 0"<<endl;
	cout<<"-----------------------------\n"<<endl;
}


int meniul () {
	bool stop = false;
	int opt;
	while(stop == false) {
    	uiMeniu();
    	cout<<"Introd opt: ";
    	cin>>opt;

    	switch (opt) {
        	case 1:{
                Preparat* preparat = new Preparat;
                cin>>*preparat;
                preparate.push_back(preparat);
                return 0;
            	break;
            }
        	case 2:{
                Menu* meniu = new Menu;
                meniuri.push_back(meniu);
                return 0;
            	break;
            }
        	case 3:{
                Masa* masa = new Masa;
                mese.push_back(masa);
                return 0;
            	break;
            }
        	case 4:{
                int index;
                if(meniuri.size() != 0){
                    cout<<"Aveti "<<meniuri.size()<<" meniuri. In care vreti sa il adaugati";
                    return 0;
                    break;
                }
                cin>>index;
                (meniuri[index])->adaugarePreparat();
           	    
                return 0;
            	break;
            }
        	case 5:{
                if(preparate.size() < 2){
                    cout<<"Nu aveti suficiente preparate."<<endl;
                    return 0;
                    break;
                }
                int primu,doi;
                for (int i = 0; i < preparate.size(); i++){
                    cout<<i<<". "<<preparate[i]->getNume();
                    cout<<endl;
                }
                cout<<endl<<"Primul index: "<<endl;
                cin>>primu;
                cout<<endl<<"Al doilea index: ";
                cin>>doi;
                cout<<endl;
                if(*(preparate[primu]) > *(preparate[doi])){
                    cout<<"Primul este mai scump";
                }else{
                    cout<<"Al doilea este mai scump";
                }
           	 
                return 0;
            	break;
            }

            case 6:{
                if(preparate.size() < 2){
                    cout<<"Nu aveti suficiente preparate."<<endl;
                    return 0;
                    break;
                }
                int primu,doi;
                for (int i = 0; i < preparate.size(); i++){
                    cout<<i<<". "<<preparate[i]->getNume();
                }
                cout<<"Primul index: ";
                cin>>primu;
                cout<<endl<<"Al doilea index: ";
                cin>>doi;
                cout<<endl;
                Preparat* preparat;
                *preparat = *preparate[primu]+*preparate[doi];
                preparate.push_back(preparat);
                return 0;
                break;
            }

            case 7:{
                int index;
                int indexPreparat;
                cout<<"Aveti "<<meniuri.size()<<" meniuri."<<endl;
                cout<<"Din care vreti sa scoateti? ";
                cin>>index;
                cout<<endl;
                meniuri[index]->afisareMeniu();
                cout<<endl<<"Ce preparat vreti sa scoateti? ";
                cin>>indexPreparat;
                cout<<endl;
                meniuri[index]->eliminarePreparat(indexPreparat-1);
                return 0;
                break;
            }
            
            case 8:{
                int index, indexPreparat;
                cout<<"Aveti "<<meniuri.size()<<" meniuri."<<endl;
                cout<<"Din care vreti sa afisati? ";
                cin>>index;
                cout<<endl<<"Al catalea element vreti sa-l afisati?Sunt  "<<meniuri[index]->getNrPreparate()<<" preparate. ";
                cin>>indexPreparat;
                cout<<endl;
                meniuri[index]->afisarePreparat(indexPreparat-1);
                cout<<endl;
                return 0;
                break;
            }

            case 9:{
                for(int i = 0; i < preparate.size(); i++){
                    cout<<i<<". "<<preparate[i]->getNume()<<endl;
                }
                return 0;
                break;
            }

        	case 0:{
            	stop = true;
                return 2;
            	break;
            }

        	default:{
            	cout << "Optiune nevalida! Incearca din nou.\n";
                return 1;
            }
    	}
        return 0;
	}
    return 0;
}