#include <iostream>
using namespace std;

class car{
    private:
    string model;

    protected:
    double price;

    public:
    double avg;
    car(){
        cout<<"0 arg constructor"<<endl;
    }
    car(string m, double p, double av){
        model=m; 
        price=p;
        avg=av;
    }
    void show(){
        cout<<"Model - "<<model<<endl;
        cout<<"Price - "<<price<<endl;
        cout<<"Average - "<<avg<<endl;
    }
    //method show to print all the members
};
int main()
{

}