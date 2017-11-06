#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "probka.hpp"
#include "sygnal.hpp"
#include "SygnalLoader.hpp"
#include "AnalizatorSygnalu.hpp"

using namespace std;


int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}



AnalizatorSygnalu a1;
Sygnal sy;
SygnalLoader sl;
Probka p1;
sy=sl.wczytajSygnal(argv[1]);
sl.zapiszSygnal(sy,"out.csv");
cout<< "srednia wynosi"<< a1.srednia(sy)<<endl;
cout<< "calka wynosi"<< a1.calka(sy)<<endl;
cout<< "dlugosc wynosi"<< a1.dlugosc(sy)<<endl;
cout<< "maximum wynosi"<< a1.maksimum(sy)<<endl;
cout<< "minimum wynosi"<< a1.minimum(sy)<<endl;


    cin.get();


return 0;
}

