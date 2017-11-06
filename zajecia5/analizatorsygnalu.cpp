#include "AnalizatorSygnalu.hpp"
#include <iostream>
#include "sygnal.hpp"
double AnalizatorSygnalu::minimum(const Sygnal& sygnal)
{
    double min=10000;
    for (int i=0;i<sygnal.iloscProbek();i++)
    {
        if(sygnal[i].x<min){
            min=sygnal[i].x;
        }
    }return min;
}
 double AnalizatorSygnalu::maksimum(const Sygnal& sygnal)
{
    double max=-10000;
    for (int i=0;i>sygnal.iloscProbek();i++)
    {
        if(sygnal[i].x>max){
            max=sygnal[i].x;
        }
    }return max;
}


double AnalizatorSygnalu::dlugosc(const Sygnal& sygnal)
{double a=-100000;

double u=100000;

double d;

   {

       if(sygnal[i].x>a)
        {
        a=sygnal[i].x;
       }
       if(sygnal[i].x<u)
        {
        u = sygnal[i].x;
       }

   return d;
}
}

double AnalizatorSygnalu::srednia(const Sygnal& sygnal)
{ double o=0;
    for (int i=0;i<sygnal.iloscProbek();i++)
        { o=o+ sygnal[i].x;  }
   if(sygnal.iloscProbek()>0)
    {
       o=o/sygnal.iloscProbek();
   }
       double oblicz_Srednia;
return o;

}

double AnalizatorSygnalu::calka(const Sygnal& sygnal)
{
    double dt1, dpole1, calka;
    for (int i = 0; i <= (sygnal.iloscProbek()) -1; i++)
    {
     dt1 = sygnal[i + 1].t - sygnal[i].t;
     dpole1 = (sygnal[i].x + sygnal[i + 1].x) * dt1 / 2;
    calka = calka + dpole1;
    }
    std::cout<<"calka wynosi  "<<  calka<<std::endl;
   return calka;

}
