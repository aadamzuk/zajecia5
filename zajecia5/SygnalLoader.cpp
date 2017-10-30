#include "SygnalLoader.hpp"
Sygnal SygnalLoader::wczytajSygnal(std::string nazwaPliku)
{
    ifstream plik (n);
    Sygnal sn;
    string line;
    while (getline(plik,line))
{
    stringstream aa(line);
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
    sn.dodajProbke(Probka(_t,_x));
}
plik.close();

return Sygnal

}
void SygnalLoader::zapiszSygnal(Sygnal& sygnal,std::string nazwaPliku)
{
   ofstream plik (nazwa_pliku);

   for (int i=0;i<sygnal.iloscProbek();i++)
   {
       plik<<sygnal[i].t <<", "<<sygnal[i].x<< endl;
   }
   plik.close();
}
