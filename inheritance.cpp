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
        cout<<"0 arg constructor car"<<endl;
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
};
class sportscar: public car{
    public:
    string color;
    sportscar(){
        cout<<"0 arg constructor sports car"<<endl;
    }
};
int main()
{
    sportscar sc;
}