/**#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Created base constructor"<<endl;
    }
    A(int a){
      cout<<"created base con with arg"<<a;
    }
};
class B : public A{
    public:
    B(){
        cout<<"created derived Base B"<<endl;
    }
    B(int a){
        cout<<"created derived constructor with arg"<<endl<<a;
    }
};
int main(){
    B b1(9);
}**/

// wap create class m and n create a class p derived from m and n add constructor and destructor to all classes, public mode

#include <iostream>
using namespace std;

class M{
    public:
    M(){
        cout<<"\nIn M";
    }
    ~M(){
        cout<<"\nout form M";
    }
};
class N{
    public:
    N(){
        cout<<"\nIn N";
    }
    ~N(){
        cout<<"\nOut from N";
    }
};
class P : public M, public N{
    public:
    P(){
        cout<<"\nIn P";
    }
    ~P(){
        cout<<"\nOut from P";
    }
};
int main(){
    P p;
}