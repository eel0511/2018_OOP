#include "Candy.h"
#include "Cookie.h"
#include "Sundae.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout<<fixed<<setprecision(2);
    const int size = 5;
    dessertItem **items = new dessertItem*[size];
    items[0] = new Candy(2, 3.99, "nerds");
    items[1] = new Cookie(36, 1.99,"choc chip");
    items[2] = new Icecream(true,2,"Chocolate");
    items[3] = new Sundae(1.50,false,3,"Caramel");
    items[4] = new Icecream(false,3,"Mint Chocolate Chip");

    for(int i=0;i<size;i++){
        items[i]->print();
        cout <<"$"<<items[i]->getCost() <<endl<<endl;
    }
}