#include "Icecream.h"
#include <string>
#include <iostream>

using namespace std;

Icecream::Icecream(bool isCone,int numberOfScoops,string dessertName):dessertItem(dessertName){
    setNumberOfScoops(numberOfScoops);
    setType(isCone);
    setName(dessertName);
}
void Icecream::setNumberOfScoops(int s){
    numberOfScoops = s;
}
int Icecream::getNumberOfScoops(){
    return numberOfScoops;
}
void Icecream::setType(bool c){
    isCone = c;
}
bool Icecream::getType(){
    return isCone;
}
void Icecream::print(){
    if(isCone == 1){
        cout<<getName()<<endl<< getNumberOfScoops()<<" scoops"<<" + cone"<<endl;
    }
    else{
        cout<<getName()<<endl<<getNumberOfScoops()<<" scoops"<<endl;
    }
}
double Icecream::getCost(){
    if(isCone == 1){
    return getNumberOfScoops()+0.5;
    }
    else{
        return getNumberOfScoops();
    }
}