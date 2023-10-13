#include <iostream>
using namespace std;

class B{
    protected:
    int x;
    public:
    void get_dataB(){
        cin>>x;
    }
    ~B(){
        cout<<"B destroyed"<<endl;
    }
};
class DB1: public virtual get_dataB{
    protected:
    int y;
    public:
    void get_dataDB1(){
        cin>>y;
    }
    ~DB1(){
        cout<<"DB1 destroyed"<<endl;
    }
};
class DB2: public virtual get_dataB{
    protected:
    int z;
    public:
    void get_dataDB2(){
        cin>>z;
    }
    ~DB2(){
        cout<<"DB2 destroyed"<<endl;
    }
};
// virtual grandparent class in child class to resolve ambiguuity
// can use one of the class as private then ambiguity resolved
class D: public DB1, public DB2{
    public:
    void sum(){
        int result;
        result=x+y+z;
        cout<<"Result "<<result<<endl;
    }
};

int main(){
    D obj1;
    obj1.get_dataDB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();

}
