#include "Function.h"
#include <stdlib.h>

int checkAge(string animalType){

    int choice;
    int age;
    cout<<"There was a problem with your "<<animalType<<" file.\n";
    cout<<"Age is not an int value.\n";
    cout<<"Would you like to quit program and fix the file, or manually enter a value\n";
    cout<<"Enter 1 to quit program, enter 2 to manually enter an int value.\n";
    cin>>choice;
    while((choice<1)||(choice>2)){
        cout<<"Please enter a 1 or 2.\n";
        cin>>choice;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a charactor.\n";
            cin >> choice;
        }
    }
    if(choice == 1){
        exit(0);
    }
    else if(choice ==2 ){
        cout<<"Please enter the int value for the age.\n";
        cin >> age;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a character.\n";
            cin >> age;
        }
    }
    age = abs(age);
    return age;
}

int checkWeight(string animalType){

    int choice;
    int weight;
    cout<<"There was a problem with your "<<animalType<<" file.\n";
    cout<<"Weight is not an int value.\n";
    cout<<"Would you like to quit program and fix the file, or manually enter a value\n";
    cout<<"Enter 1 to quit program, enter 2 to manually enter an int value.\n";
    cin>>choice;
    while((choice<1)||(choice>2)){
        cout<<"Please enter a 1 or 2.\n";
        cin>>choice;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a charactor.\n";
            cin >> choice;
        }
    }
    if(choice == 1){
        exit(0);
    }
    else if(choice ==2 ){
        cout<<"Please enter the int value for the weight.\n";
        cin >> weight;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a character.\n";
            cin >> weight;
        }
    }
    weight = abs(weight);
    return weight;
}

int checkHeight(string animalType){

    int choice;
    int height;
    cout<<"There was a problem with your "<<animalType<<" file.\n";
    cout<<"Height is not an int value.\n";
    cout<<"Would you like to quit program and fix the file, or manually enter a value\n";
    cout<<"Enter 1 to quit program, enter 2 to manually enter an int value.\n";
    cin>>choice;
    while((choice<1)||(choice>2)){
        cout<<"Please enter a 1 or 2.\n";
        cin>>choice;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a charactor.\n";
            cin >> choice;
        }
    }
    if(choice == 1){
        exit(0);
    }
    else if(choice ==2 ){
        cout<<"Please enter the int value for the height.\n";
        cin >> height;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a character.\n";
            cin >> height;
        }
    }
    height = abs(height);
    return height;
}

bool checkBool(string animalType,string var){

    int choice;
    string freshwater;
    bool freshWaterVal;
    cout<<"There was a problem with your "<<animalType<<" file.\n";
    cout<<"Height is not an bool value.\n";
    cout<<"Would you like to quit program and fix the file, or manually enter a value\n";
    cout<<"Enter 1 to quit program, enter 2 to manually enter an int value.\n";
    cin>>choice;
    while((choice<1)||(choice>2)){
        cout<<"Please enter a 1 or 2.\n";
        cin>>choice;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Please enter a number and not a charactor.\n";
            cin >> choice;
        }
    }
    if(choice == 1){
        exit(0);
    }
    else if(choice ==2 ){
        cout<<"Please enter the bool value for the height.\n";
        cout<<"Enter all caps TURE of all caps FALSE.\n";
        cin >> freshwater;
        while((freshwater != "TURE")&&(freshwater != "FALSE")){
            cout<<"Please enter TRUE of FALSE.\n";
            cin>>freshwater;
        
    }
    if(freshwater == "TRUE"){
        freshWaterVal = true;
    }
    else if (freshwater == "FALSE"){
        freshwater = false;
    }
}
return freshWaterVal;
}