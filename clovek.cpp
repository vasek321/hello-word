#include "clovek.h"

using namespace std;

Clovek::Clovek()
{}

void Clovek::nacti_data()
{
    nacti_jmeno_a_prijmeni();
    nacti_vek();
    nacti_vyska();
    nacti_vzdelani();
}

void Clovek::nacti_jmeno_a_prijmeni()
{
    cout<<"Zadejte jmeno a prijmeni\n";
    cin>>jmeno>>prijmeni;
}

void Clovek::nacti_vek()
{
    int vek_min, vek_max;
    vek_min=0;
    vek_max=150;

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Zadejte vek\n";
            cin>>vek;
       }
    while (cin.fail() || vek < vek_min || vek > vek_max);
}

void Clovek::nacti_vyska()
{
    int vyska_min, vyska_max;
    vyska_min=0;
    vyska_max=250;

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Zadejte vysku\n";
            cin>>vyska;
       }
    while (cin.fail() || vyska < vyska_min || vyska > vyska_max);
}

void Clovek::nacti_vzdelani()
{

    do {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Zadejte nejvyssi dosazene vzdelani: 0 zakladni skola, 1 stredni skola, 2 vysoka skola\n";
            cin>>vzdelani;
       }
    while (cin.fail() || vzdelani<0 || vzdelani>2);
}

void Clovek::zapis_do_souboru(fstream& soubor)
{
     soubor<<"Udaje uchazece \n";
     soubor<<"Jmeno a prijmeni:"<<jmeno<<" "<<prijmeni<<" \n";
     soubor<<"Vek:"<<vek<<"\n";
     soubor<<"Vyska(cm):"<<vyska<<"\n";
     soubor<<"Dosazene vzdelani:";

    if (vzdelani==0)
    {
        soubor<<"zakladni";
    }
    else if (vzdelani==1)
    {
       soubor<<"stredoskolske";
    }
    else
    {
        soubor<<"vysokoskolske";
    }

    soubor<<"\n";
}
