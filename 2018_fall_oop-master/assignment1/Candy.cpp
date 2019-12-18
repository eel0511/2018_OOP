#include "Candy.h"
#include <string>
#include <iostream>

using namespace std;

Candy::Candy(double candyWeight,double pricePerPound,string dessertName):dessertItem(dessertName){

    setWeight(candyWeight);
    setPrice(pricePerPound);
    setName(dessertName);
}
void Candy::setWeight(double w){
    candyWeight = w;
}
double Candy::getWeight(){
    return candyWeight;
}
void Candy::setPrice(double p){
    pricePerPound = p;
}
double Candy::getPrice(){
    return pricePerPound;
}
void Candy::print(){
    cout<<getName()<<endl<< getWeight()<<" pounds"<<"@"<<getPrice()<<" per pound"<<endl;
}
double Candy::getCost(){
    return getWeight()*getPrice();
}

