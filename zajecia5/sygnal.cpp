#include "sygnal.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
void Sygnal::dodajProbke(const Probka& p);
{
    _zmienne.push_back(p);
}

int Sygnal::iloscProbek()
{
    return _zmienne.size();
}
Probka& Sygnal::operator[](int i){return _zmienne[i]}
std::ostream& operator<<(std::ostream& stream,const Sygnal& sygnal){
    for(i=0;i<_zmienne.size();i++)
    {

    }
}

