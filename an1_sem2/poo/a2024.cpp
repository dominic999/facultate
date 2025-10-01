#include<iostream>
#include<vector>
#include<list>
#include<typeinfo>


using namespace std;

class Artefact{
    protected: 
        inline static int id = 0;
        int idPersonal;
        string nume;
    
    public:
        Artefact(string n):nume(n){idPersonal=id++;};
        virtual void afisare(){
            cout<<"Numele artefactului este "<<nume<<". ";
        }
};

class ArtefactIstoric: virtual public Artefact{
    vector<string> personalitati;
    public:
        ArtefactIstoric(string n="Aurel", vector<string> p = {}): Artefact(n), personalitati(p){};
        void afisare() override{
            Artefact::afisare();
            cout<<"Personalitatiile asociate artefactului sunt:\n";
            int i = 1;
            for(string p : personalitati){
                cout<<i<<". "<<p<<endl;
                i++;
            }
            cout<<"id: "<<idPersonal<<endl;
        }
};

class ArtefactArtistic: virtual public Artefact{
    inline static vector<string> tipuriPosibile = {"pictura", "sculptura"};
    inline static vector<string> materialePictura = {"acrilic", "ulei"};
    inline static vector<string> materialeSculptura = {"lemn", "piatra", "marmura"};
    string tip;
    string material;

    public:
        ArtefactArtistic(string n="Aurel", string t="pictura", string m = "acrilic"): Artefact(n), tip(t), material(m){};
        void afisare() override{
            Artefact::afisare();
            cout<<"Acest artefact este o "<<tip<<". Realizata"<<((tip=="pictura") ? " cu ":" in ")<<material<<endl;
            cout<<"id: "<<idPersonal<<endl;
        }
        static vector<string> getMaterialePictura(){
            return materialePictura;
        }
        static vector<string> getMaterialeSculptura(){
            return materialeSculptura;
        }
};

class ArtefactePretioase: virtual public Artefact{
    string designer = "Necunoscut";
    int greutate;
    public:
        ArtefactePretioase(string n="Aurel", int g=250, string d = "Necunoscut"): Artefact(n),greutate(g), designer(d){};
        void afisare() override{
            Artefact::afisare();
            cout<<"Designerul este "<<designer<<" si are gretuatetea "<<greutate<<endl;
            cout<<"id: "<<idPersonal<<endl;
        }
};


class Entitate{
    protected: 
        inline static int id = 0;
        int idPersonal;
        float buget=0;
        float pas=0;
        float confort=0;
        //! 1.istoric 2.artistic 3.pretios
        int artefactPreferat=0;
        int artefactIgnorat=0;
        string nume;

    public:
        Entitate(string n):nume(n){idPersonal=id++;};
        virtual string getName() {
            return nume;
        }
        virtual float getBuget() {
            return buget;
        }
        virtual float getPas(){
            return pas;
        }
        virtual float getConfort(){
            return confort;
        }
        virtual int getPref(){
            return artefactPreferat;
        }
        virtual int getIgn(){
            return artefactIgnorat;
        }

};

class PersoanaFizica: virtual public Entitate{
    
    public:
        PersoanaFizica(string n="Taut"):Entitate(n){};
        friend ostream& operator<<(ostream& os, PersoanaFizica& pers);
};

ostream& operator<<(ostream& os, PersoanaFizica& pers){

    os<<"Aceasta este o persoana fizica pe nume "<<pers.getName()<<". Are un buget de "<<pers.getBuget()<<", un pas de licitat de ";
    os<<pers.getPas()<<" si un prag de confort de "<<pers.getConfort()<<endl;

    return os;
}


class PersoanaJuridica: virtual public Entitate{
    vector<string> persoane;
    public:
        PersoanaJuridica(string n="Taut"):Entitate(n){};
        friend ostream& operator<<(ostream& os, PersoanaJuridica& pers);
};

ostream& operator<<(ostream& os, PersoanaJuridica& pers){
    os<<"Aceasta este o persoana juridica pe nume"<<pers.getName()<<". Are un buget de "<<pers.getBuget();
    os<<", un pas de "<<pers.getPas()<<" si o valoare de confort de "<<pers.getConfort()<<"."<<endl;
    os<<"De asemenea persoanele fizice ce o formeaza sunt:\n";
    int count = 1;
    for(string n : pers.persoane){
        os<<count++<<"."<<n<<endl;
    }
    return os;
}


class Meniu{
    inline static Meniu* instanta;
    Meniu()=default;
    Meniu(Meniu& ob)=delete;
    Meniu& operator=(Meniu& ob)=delete;
    
    public:
        static Meniu* getInstanta(){
            if(!instanta){
                instanta = new Meniu();
            }
            return instanta;
        }

        void afisareOptiuni(){
            int optiunne;
            cout<<"Ce doriti sa faceti?\n";
            cout<<"1.Adaugare participant\n";
            cout<<"2.Adaugare artefact\n";
            cout<<"3.Afisare participanti\n";
        }
};

vector<Entitate*> entitatiParticipante;
vector<Artefact*> artefacteDisponibile;


Entitate* adaugareParticipant(){
    int pers;
    cout<<"Participantul este:\n";
    cout<<"1.Persoana fizica\n";
    cout<<"2.Persoana juridica\n";
    cout<<"Va rog sa introduceti indexul dorit: ";
    cin>>pers;
    cout<<endl;
    Entitate* dn;
    if (pers == 1){
        PersoanaFizica*  nou = new PersoanaFizica;
        dn = nou;
    }else{
        PersoanaJuridica* nou = new PersoanaJuridica;
        dn = nou;
    }
    entitatiParticipante.push_back(dn);
    return dn;
    
}

void adaugareArtefact(){
    int art;
    cout<<"Artefactul este:";
    cout<<"\n1.Artefact istoric\n";
    cout<<"2.Artefact artistic\n";
    cout<<"3.Artefact pretios\n";
    cout<<"Alegeti indexul corespunzator: ";
    cin>>art;
    cout<<endl;
    Artefact* an;
    string nume;
    cout<<"Cum se numeste artefacul? ";
    cin>>nume;
    //? Daca este artefact istoric
    if(art == 1){
        vector<string> personalitati;
        string personalitate;
        cout<<"\nCe personalitati sunt asociate cu el? Cand vreti sa va opriti scrieti un '?'.\n";
        while(personalitate != "."){
            cout<<"Personalitate: ";
            cin>>personalitate;
            cout<<endl;
            if(personalitate != " " && personalitate != "."){
                personalitati.push_back(personalitate);
            }
        }
        ArtefactIstoric* nou = new ArtefactIstoric(nume, personalitati);
        an = nou;
    //? Daca este artefact artistic
    }else if(art == 1){
        int t,m;
        string tip,material;
        cout<<"Este:\n1.Pictura\n2.Sculptura\n";
        cout<<"Alegeti indexul: ";
        cin>>t;
        cout<<endl;
        if(t == 1){
            tip = "pictura";
            cout<<"\nDin ce material este facut? ";
            int i = 1;
            for (string mp : ArtefactArtistic::getMaterialePictura()){
                cout<<i++<<"."<<mp<<endl;
            }
            cout<<"Alegeti indexul: ";
            cin>>m;
            cout<<endl;
            material = ArtefactArtistic::getMaterialePictura()[m-1];
        }
        ArtefactArtistic* nou = new ArtefactArtistic(nume, tip, material);
        an = nou;
    }else if(art == 2){
        int greutate;
        string designer = "Necunoscut";
        cout<<"Ce greutate are? ";
        cin>>greutate;
        cout<<endl;
        cout<<"Care este designerul? Daca este necunoscut, puteti scrie un punct: ";
        cin>>designer;
        cout<<endl;
        ArtefactePretioase* nou = new ArtefactePretioase(nume, greutate, designer);
        an = nou;
    }
    artefacteDisponibile.push_back(an);
}


void afisareParticipanti(){
    for (Entitate* entitate : entitatiParticipante){
        // !Prima oara verific daca este persoana fizica
        PersoanaFizica* pf = dynamic_cast<PersoanaFizica*> (entitate);
        if(pf){
            cout<<*pf;
        }else{
            PersoanaJuridica* pj = dynamic_cast<PersoanaJuridica*> (entitate);
            cout<<*pj;
        }
    }
}


int main(){


    PersoanaFizica a;
    Entitate* cb = &a;
    cout<<a;

    return 0;
}
