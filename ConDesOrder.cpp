#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(){
        cout<<"\nCalling base class default.";
    }
    A(int a){
        x=a;
        cout<<"Calling base class parameterised"<<x;
    }
    ~A(){
        cout<<"\n Calling base class destructor";
    }
};

class B: public A{
    int l;
    public:
    B(){
        cout<<"Calling derived class";
    }
    B(int p):A(p){
        l=p;
        cout<<"\nCalling derived class parameterised:"<<l;
    }
    ~B(){
        cout<<"\nCalling derived class destructor";
    }
};

int main(){
    B obj2(1);
}