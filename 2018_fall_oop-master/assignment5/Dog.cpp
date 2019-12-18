#include <iostream>
#include <fstream>
#include "animal.h"

using namespace std;

Dog::Dog(){

}
void Dog::readInfo(){
    std::string a,b,c,d,e;
fstream inFile;
inFile.open("/home/suhyung/2018_fall_oop/assignment5/Dog.csv");
getline(inFile,a,'\n');
getline(inFile,a,',');
getline(inFile,b,',');
getline(inFile,c,',');
getline(inFile,d,',');
getline(inFile,e,',');


setName(a);
setBreed(b);
setAge(atoi(c.c_str()));
setColor(d);
setWeight(atoi(e.c_str()));

}
void Dog::printInfo(){

cout<<"Dog Information:"<<endl;
cout<<"Name : "<<getName()<<endl;
cout<<"Breed: "<<getBreed()<<endl;
cout<<"Age: "<<getAge()<<" (years)"<<endl;
cout<<"Color: "<<getColor()<<endl;
cout<<"Weight: "<<getWeight()<<" (pounds)"<<endl;
}
void Dog::subtractTen(){
    setWeight(getWeight()-10);
}
