// my first program in C++
#include <iostream>
using namespace std;

int main()
{
    cout << "Zadejte jmeno a prijmeni." << endl;
    string jmeno, prijmeni;
    cin >> jmeno >> prijmeni;

    cout << "Zadejte vek mezi 0 a 150." << endl;
    int vek;
    do  {
        cin >> vek;
        }
    while (vek > 150);

    cout << "Zadejte vysku mezi 0 a 250." << endl;
    float vyska;
        do  {
        cin >> vyska;
        }
    while (vyska > 250.0);

    cout << "Zadejte dosazene vzdelani (ZS, SS, VS)." << endl;
    string vzdelani;
    cin >> vzdelani;
    if (vzdelani == "ZS" || vzdelani == "SS" || vzdelani == "VS") {
        cout << jmeno << " " << prijmeni << " je " << vek << " let stary, ma " << vyska << " cm a ma " << vzdelani << " vzdelani" << endl;
    }
    else{
        cout << jmeno << " " << prijmeni << " je " << vek << " let stary a ma " << vyska << " cm" << endl;
        cout << "Nezname dosazene vzdelani." << endl;
    }


    return 0;
}
