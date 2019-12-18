#include <iostream>
#include <fstream>
#include "animal.h"

using namespace std;

Fish::Fish(){

}
void Fish::readInfo(){
    std::string a,b,c,d,e;
fstream inFile;
inFile.open("/home/suhyung/2018_fall_oop/assignment5/Fish.csv");
getline(inFile,a,'\n');
getline(inFile,a,',');
getline(inFile,b,',');
getline(inFile,c,',');
getline(inFile,d,',');
getline(inFile,e,',');

bool f = (c=="TRUE")?true:false;
bool g = (e=="TRUE\n")?true:false;
setName(a);
setColor(b);
setFreshwater(f);
setHabitat(d);
setPredator(g);

}
void Fish::printInfo(){

cout<<"Fish Information:"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Color: "<<getColor()<<endl;
cout<<"freshwater: "<<convertBool(getFreshwater())<<endl;
cout<<"Habitat: "<<getHabitat()<<endl;
cout<<"Predator: "<<convertBool(getPredator())<<endl;
}
std::string Fish::convertBool(bool _value){
return _value?"TRUE":"FALSE";
}