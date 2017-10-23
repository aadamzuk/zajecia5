#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include <string>
#include "sygnall.hpp"
#include <string>

class SygnalLoader{
public:
    SygnalLoader();
    Sygnal wczytajSygnal (std::string nazwaPliku);
    void apiszSygnal(Sygnal& sygnal,std::string nazwaPliku)
};
