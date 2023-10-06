#include <iostream>
using namespace std;

class A{
    public:
    A(){cout<<"constructor of A"<<endl;}
    ~A(){cout<<"destructor of A"<<endl;}
};
class B : public A{

};