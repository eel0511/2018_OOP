#include "mathTeacher.h"
#include <iostream>

using namespace std;

mathTeacher::mathTeacher(string profession,int age)
    :person(profession,age)
{
        setProfession(profession);
        setAge(age);
}

void mathTeacher::teachMath()
{
    cout<<"I can teach Maths."<<endl;
}
