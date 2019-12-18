#include <iostream>

using namespace std;

int main(){

    char grade;
    cin >> grade;
    switch(grade){
        case 'A':
        cout <<"your score is over 100 points"<<endl;
        break;
         case 'B':
        cout <<"your score is over 90 points and less than 100 point"<<endl;
        break;
         case 'C':
        cout <<"your score is over 80 points and less than 90 point"<<endl;
        break;
         case 'D':
        cout <<"your score is over 70 points and less than 80 point"<<endl;
        break;
        default :
        cout <<"your score less than 70 points"<< endl;

    }
}