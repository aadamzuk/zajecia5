#include "SygnalLoader.hpp"
#include <fstream>
#include <sstream>
using namespace std;
Sygnal SygnalLoader::wczytajSygnal(std::string nazwaPliku)
{

    ifstream plik (nazwaPliku);
    Sygnal sn;
    string line;
    while (getline(plik,line))
{
    stringstream aa(line);
    double _t, _x;
    aa>>_x;
    aa.ignore();
    aa>>_t;
    cout<<_t<<endl;
    cout<<_x<<endl;
    sn.dodajProbke(Probka(_t,_x));
}
plik.close();

return Sygnal();

}
void SygnalLoader::zapiszSygnal(Sygnal& sygnal,std::string nazwaPliku)
{
   ofstream plik (nazwaPliku);

   for (int i=0;i<sygnal.iloscProbek();i++)
   {
       plik<<sygnal[i].t <<", "<<sygnal[i].x<< endl;
   }
   plik.close();
}
