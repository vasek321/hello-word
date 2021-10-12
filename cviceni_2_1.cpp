// my first program in C++
#include <iostream>
#include <fstream>
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

    fstream file;
    file.open("vystup.txt",ios::out);
    if(!file)
    {
      return 0;
    }
    cout << "\nFile created successfully."<< endl;
    file<<jmeno<<" "<<prijmeni<<" "<<vek<<" "<<vyska<<" "<<vzdelani<< endl;
    file.close();

    file.open("vystup.txt",ios::in);
    if(!file){
        return 0;
    }
    file>>jmeno;
    file>>prijmeni;

    cout << "jmeno: "<<jmeno<<", prijmeni: "<<prijmeni<<"\nvek: "<<vek<<"\nvyska: "<<vyska<<"\nvzdelani: "<<vzdelani<< endl;



    return 0;
}
