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
    sportscar(string c){
        color=c;
    }
    void show1(){
        cout<<model<<endl;
        cout<<price<<endl;
        cout<<avg<<endl;
    }
};
int main()
{
    sportscar sc;
    sc.show1();
}
//wap to create class student with three all modes, 0 arg constructore,show() to print values,create a chidclass EnggStudent, create 0 constructor, create objectof EnggStudent
