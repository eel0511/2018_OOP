#include <iostream>
#include <fstream>
#include "animal.h"

using namespace std;

Horse::Horse(){

}
void Horse::readInfo(){
    std::string a,b,c,d,e;
fstream inFile;
inFile.open("/home/suhyung/2018_fall_oop/assignment5/Horse.csv");
getline(inFile,a,'\n');
getline(inFile,a,',');
getline(inFile,b,',');
getline(inFile,c,',');
getline(inFile,d,',');
getline(inFile,e,',');

setName(a);
setColor(b);
setManeColor(c);
setAge(atoi(d.c_str()));
setHeight(atoi(e.c_str()));


}
void Horse::printInfo(){

cout<<"Horse Information:"<<endl;
cout<<"Name : "<<getName()<<endl;
cout<<"Color: "<<getColor()<<endl;
cout<<"Mane Color: "<<getManeColor()<<endl;
cout<<"Age: "<<getAge()<<" (years)"<<endl;
cout<<"Height: "<<getHeight()<<" (hands)"<<endl;
}
