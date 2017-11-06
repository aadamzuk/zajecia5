#include "sygnal.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
Sygnal::Sygnal()
{


}
void Sygnal::dodajProbke(const Probka& p)
{
    _zmienne.push_back(p);
}

int Sygnal::iloscProbek() const
{
    return _zmienne.size();
}
const Probka& Sygnal::operator[](int i) const
{
    return _zmienne[i];
}
Probka& Sygnal::operator[](int i){
    return _zmienne[i];
    }


