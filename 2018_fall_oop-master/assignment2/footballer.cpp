#include "footballer.h"
#include <iostream>

using namespace std;

footballer::footballer(string profession,int age)
    :person(profession,age)
{
        setProfession(profession);
        setAge(age);
}

void footballer::playFootball()
{
    cout<<"I can play Football."<<endl;
}
