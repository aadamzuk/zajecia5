#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <vector>
#include "probka.hpp"
#include <string>
#include<iostream>


class Sygnal {
public:
Sygnal();
void dodajProbke(const Probka& p);
int iloscProbek() const;
Probka& operator[](int i);
const Probka& operator[](int i) const;
friend std::ostream& operator<<(std::ostream& stream,const Sygnal& sygnal);




private:
std::vector <Probka> _zmienne;
};

#endif
