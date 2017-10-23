#ifndef PROBKA_HPP
#define PROBKA_HPP



class Probka {
    public:
        Probka();
 double t;
 double x;

 Probka(double _t,double _x);
 friend std::ostream& operator<<(std::ostream& stream,const Probka& probka);
};

#endif

