#include <iostream>
using namespace std;

class base{
    public:
    base(){cout<<"Constructing base"<<endl;} 
    virtual ~base(){cout<<"destructing base"<<endl;}
};

class derived1: public base{
    public:
    derived1(){
        cout<<"constructing derived"<<endl;
    }
    ~derived1(){
        cout<<"destructing derived"<<endl;
    }
};

int main(){
    base *b= new derived1;
    delete b;
    return 0;
}