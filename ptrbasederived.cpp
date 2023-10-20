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
    BC *bptr;
	BC base;
	bptr=&base;//Base pointer can point towards base class
	cout<<"bptr points to base objects\n";
	bptr->show();
	//derived class
	DC derived;
	bptr=&derived;//Base pointer can point towards derived class
	cout<<"bptr now points to derived objects\n";
    //bptr->printDC();//Base pointer cannot access specific members of derived directly (error)
	bptr->show(); //Base pointer can access the common members in base and derived, show() of base is called due to early binding
    //accessing data using a pointer of type derived class DC
    dc *dptr;    //derived type pointer
    dptr=&derived;//derived pointer can point towards its own object only
    cout<<"dptr is derived type pointer\n";
    dptr->show();//derived pointer can access its own members
    dptr->printDC();//derived pointer can access its own members
    cout<<"using ((DC*)bptr)\n";
    ((DC*)bptr)->show();//Base pointer can access members of derived through type casting
    ((DC*)bptr)->printDC();//Base pointer can access members of derived through type casting
    //dptr=&base;//Derived pointer cannot point towards base class(error)
    return 0;
}
//method overriding - same name and same signature function in parent and child , child overrides function involves inheritance
// method overloading - same name and diff signature fuction in same class