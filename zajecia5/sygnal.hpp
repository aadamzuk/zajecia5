#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <vector>
#include "probka.hpp"
#include <string>


class sygnal {
public:
Sygnal();
void dodajProbke(const Probka& p);
int iloscProbek();
Probka& operator[](int i);
friend std::ostream& operator<<(std::ostream& stream,const sygnal& sygnal);



private:
std::vector <Probka> _zmienne;
};

#endif
