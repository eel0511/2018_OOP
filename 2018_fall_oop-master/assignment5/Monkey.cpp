#include <iostream>
#include <fstream>
#include <sstream>
#include "animal.h"

using namespace std;

Monkey::Monkey(){

}
void Monkey::readInfo(){
    
    std::string a,b,c,d,e,f;
fstream inFile;
inFile.open("/home/suhyung/2018_fall_oop/assignment5/Monkey.csv");
getline(inFile,a,'\n');
getline(inFile,a,',');
getline(inFile,b,',');
getline(inFile,c,',');
getline(inFile,d,',');
getline(inFile,e,',');
getline(inFile,f,',');

bool g = (d=="TRUE")?true:false;
bool h = (f=="TRUE\n")?true:false; // last line

setName(a);
setColor(b);
setAge(atoi(c.c_str()));
setWild(g);
setHome(e);
setEndangered(h);
}
void Monkey::printInfo(){

cout<<"Monkey Information:"<<endl;
cout<<"Name : "<<getName()<<endl;
cout<<"Color: "<<getColor()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Wild: "<<convertBool(getWild())<<endl;
cout<<"Home: "<<getHome()<<endl;
cout<<"Endangered: "<<convertBool(getEndangered())<<endl;
}
std::string Monkey::convertBool(bool _value){

    return _value?"TRUE":"FALSE";
}


void Monkey::changeEndangered(){

   
   getEndangered()?setEndangered(false):setEndangered(true);

}
