#ifndef SUNDAE_H
#define SUNDAE_H

#include "Icecream.h"
#include <string>

using namespace std;

class Sundae: public Icecream{
    private:
    double CostOfTopping;

    public:
    Sundae(double,bool,int,string);

    void setCostOfTopping(double);
    double getCostOfTopping();
    void print();
    double getCost();
};
#endif