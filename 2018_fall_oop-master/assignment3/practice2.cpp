#include <iostream>

using namespace std;

class base
{
    public:
    void fun_1(){cout<<"base->1";}
    virtual void fun_2(){cout<<"base->2";}
    virtual void fun_3(){cout<<"base->3";}
    virtual void fun_4(){cout<<"base->4";}

};
class derived:public base
{
    public:
    void fun_1(){cout<<"derived-2";}
    void fun_2(){cout<<"derived-3";}
    void fun_4(int x){cout<<"derived-4";}
};
int main(){

    base *p;
    derived obj;
    p = &obj;
    p->fun_1();
    p->fun_2();
    p->fun_3();
    p->fun_4();

}