#include <iostream>
#include <fstream>
#include "animal.h"

using namespace std;

Lizard::Lizard(){

}
void Lizard::readInfo(){
    std::string a,b,c,d,e;
fstream inFile;
inFile.open("/home/suhyung/2018_fall_oop/assignment5/Lizard.csv");
getline(inFile,a,'\n');
getline(inFile,a,',');
getline(inFile,b,',');
getline(inFile,c,',');
getline(inFile,d,',');
getline(inFile,e,',');

bool f = (d=="TRUE")?true:false;
setName(a);
setColor(b);
setHabitat(c);
setProtected(f);
setWeight(atoi(e.c_str()));


}
void Lizard::printInfo(){

cout<<"Lizard Information:"<<endl;
cout<<"Name : "<<getName()<<endl;
cout<<"Color: "<<getColor()<<endl;
cout<<"Habitat: "<<getHabitat()<<endl;
cout<<"Protected: "<<convertBool(getProtected())<<endl;
cout<<"Weight: "<<getWeight()<<" (ounces)"<<endl;
}
std::string Lizard::convertBool(bool _value){
  return _value?"TRUE":"FALSE";
}