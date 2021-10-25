#ifndef CLOVEK_H_INCLUDED
#define CLOVEK_H_INCLUDED
#include <iostream>
#include <fstream>

int vek(int nejmensi_vek, int nejvetsi_vek);
int vyska (int nejmensi_vysku, int nejvetsi_vysku);
int vzdelani (int ZS, int SS, int VS);
bool addmore();
void uloz_do_souboru(std::string jmeno,std::string prijmeni,int vek,int vyska,int vzdelani,std::ofstream& vystup);


void nacti (std::string& jmeno,
            std::string& prijmeni,
            int& vek,
            int& vyska,
            int& vzdelani);



#endif // CLOVEK_H_INCLUDED
