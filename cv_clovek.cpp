#include <iostream>
#include <fstream>
#include "cv_nacitani.h"
using namespace std;

int vek (int nejmensi_vek, int nejvetsi_vek){

    int vek = 0;
    do{
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Zadejte vek mezi 0 a 150." << std::endl;
            std:cin >> vek;

            }
            while(std::cin.fail()|| vek < nejmensi_vek || vek > nejvetsi_vek);
            return vek;
}
int vyska (int nejmensi_vyska, int nejvetsi_vyska){

    int vyska = 0;
    do{
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Zadejte vysku mezi 0 a 250." << std::endl;
            std:cin >> vyska;

            }
            while(std::cin.fail()|| vyska < nejmensi_vyska || vyska > nejvetsi_vyska);
            return vyska;
}
int vzdelani (int ZS, int SS, int VS){

    int vzdelani = 0;
    do{
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Zadejte dosazene vzdelani (ZS, SS, VS)." << std::endl;
            std:cin >> vzdelani;

            }
            while(std::cin.fail());
            return vzdelani;
}

void uloz_do_souboru(std::string jmeno,std::string prijmeni,int vek,int vyska,int vzdelani,std::ofstream& vystup){
    vystup << jmeno << " , " << prijmeni << " , " << vek << " , " << vyska << " , " << vzdelani << std::endl;

        }
bool addmore (){
        std::string more = "";
        std::cout << "Chcete pridat dalsi? (ano, ne) ";
        std::cin >> more;
            if (more=="ano"){
                    return true;
            }
            else if (more=="ne"){
                    return false;
            }
            else {
                    std::cout << "spatny format" << std::endl;
            }
}



