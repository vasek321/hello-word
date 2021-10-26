#ifndef CLOVEK_H
#define CLOVEK_H
#include <iostream>
#include <string>
#include <fstream>

class Clovek
{
    public:
        std::string jmeno;
        std::string prijmeni;
        int vek;
        int vyska;
        int vzdelani;

        Clovek();

        void nacti_data();
        void zapis_do_souboru(std::fstream& soubor);

        void nacti_jmeno_a_prijmeni();
        void nacti_vek();
        void nacti_vyska();
        void nacti_vzdelani();

};

#endif // CLOVEK_H
