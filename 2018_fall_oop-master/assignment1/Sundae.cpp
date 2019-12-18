#include "Sundae.h"
#include <iostream>
#include <string>

using namespace std;

Sundae::Sundae(double CostOfTopping, bool isCone, int numberOfScoops,string dessertName):Icecream(isCone,numberOfScoops,dessertName){
    setCostOfTopping(CostOfTopping);
    setNumberOfScoops(numberOfScoops);
    setType(isCone);
    setName(dessertName);
}
void Sundae::setCostOfTopping(double t){
    CostOfTopping  = t;
}
double Sundae::getCostOfTopping(){
    return CostOfTopping;
}
void Sundae::print(){
    cout<<getName()<<endl<< getNumberOfScoops()<<" scoops"<<endl<<"+"<<getCostOfTopping()<<" toppings"<<endl;
}
double Sundae::getCost(){
    return getNumberOfScoops()+getCostOfTopping();
}