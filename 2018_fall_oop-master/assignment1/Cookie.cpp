#include "Cookie.h"
#include <string>
#include <iostream>

using namespace std;

Cookie::Cookie(int NumberOfCookies,double PricePerDozen,string dessertName):dessertItem(dessertName){

    setNumberOfCookies(NumberOfCookies);
    setPricePerDozen(PricePerDozen);
    setName(dessertName);
}
void Cookie::setNumberOfCookies(int n){
    NumberOfCookies = n;
}
int Cookie::getNumberOfCookies(){
    return NumberOfCookies;
}
void Cookie::setPricePerDozen(double p){
    PricePerDozen = p;
}
double Cookie::getPricePerDozen(){
    return PricePerDozen;
}
void Cookie::print(){
    cout<<getName()<<endl<< getNumberOfCookies()<<" cookies"<<" @"<<getPricePerDozen()<<" per dozen"<<endl;
}
double Cookie::getCost(){
    return getNumberOfCookies()*getPricePerDozen()/12;
}

