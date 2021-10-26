#include <iostream>
#include <vector>
#include <fstream>
#include "clovek.h"

using namespace std;

int main()
{
    string potvrzeni;
    vector <Clovek> seznam;
    int i;

    do {
        Clovek clovek;
        clovek.nacti_data();
        seznam.push_back(clovek);

        cout <<"Chcete pridat dalsi osobu? ano/ne\n";
        cin >> potvrzeni;
    }
    while(potvrzeni =="ano");

    fstream soubor("datauzivatele.txt", ios::out);

    for (i=0; i<seznam.size(); i++)
    {
        Clovek clovek = seznam[i];
        clovek.zapis_do_souboru(soubor);
        soubor<<"\n";
    }

    return 0;
}

