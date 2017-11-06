#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include <string>
#include "sygnal.hpp"
#include <string>

class SygnalLoader{
public:
    SygnalLoader(){}
    Sygnal wczytajSygnal (std::string nazwaPliku);
    void zapiszSygnal(Sygnal& sygnal,std::string nazwaPliku);
};
#endif
