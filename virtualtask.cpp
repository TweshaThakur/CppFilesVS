#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"A class show()"<<endl;
    }
    virtual void display(){
        cout<<"A class display()"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"B class show()"<<endl;
    }
    void display(){
        cout<<"B class display()"<<endl;
    }
};
int main(){
    A *a1;
    A aa;
    a1=&aa;
    a1->show();
    a1->display();
    B bb;
    a1=&bb;
    a1->show();
    a1->display();
}