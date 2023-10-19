#include <iostream>
using namespace std;

class bC{
    public:
    void printbc(){
        cout<<"Printing message in base class"<<endl;
    }
    void show(){
        cout<<"show() of base class"<<endl;
    }
};

class dc: public bc{
    public:
    void printdc(){
        cout<<"Printing message in derived class"<<endl;
    }
    void show(){
        cout<<"show () of derived class"<<endl;
    }
};

int main(){
    
}