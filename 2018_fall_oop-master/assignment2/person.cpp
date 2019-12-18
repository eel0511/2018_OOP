#include "person.h"
#include <string>
#include <iostream>

using namespace std;

person::person(string profession,int age){

    setProfession(profession);
    setAge(age);
    cout<<"My profession is : "<<profession<<endl<<"my Age is : "<<age<<endl;

}
void person::setProfession(string s){
    profession = s;
}
void person::setAge(int a){
    age = a;
}
string person::getProfession(){
    return profession;
}
int person::getAge(){
    return age;
}
void person::display(){
   walk();
   talk();
    
}
void person::walk(){

    cout<<"I can walk."<<endl;
}
void person::talk(){
    cout<<"I can talk."<<endl;

}