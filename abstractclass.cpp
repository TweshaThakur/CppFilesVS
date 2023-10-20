#include <iostream>
using namespace std;
class Sclass
{
    public:
    virtual void example()=0;
    void show()
    {
        cout<<"\nThis is sample abstract class";
}
};

class derived1:public Sclass
{
    public:
    void example()
{
    cout<<"C++";
}
};
int main()
{
    Sclass *pt;
    derived1 obj1;
    pt=&obj1;
    pt->example();
    pt->show();
}