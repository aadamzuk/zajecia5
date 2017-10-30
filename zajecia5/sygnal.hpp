#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <vector>
#include "probka.hpp"
#include <string>


class Sygnal {
public:
Sygnal();
void dodajProbke(const Probka& p);
int iloscProbek();
Probka& operator[](int i);
friend std::ostream& operator<<(std::ostream& stream,const Sygnal& sygnal);
const Probka& operator[](int i) const;


private:
std::vector <Probka> _zmienne;
};

#endif
