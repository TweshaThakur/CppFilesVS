#include <iostream>
using namespace std;
// multiple constructrs
//copy constructors
class Box{
    public:
        double length,height,width;
        Box(){
            length=width=height=-1;
            cout<<"Object is create using default constructor"<<endl;
        }
        Box(double l,double h, double w){
        length=l;
        width=w;
        height=h;
        }  
        Box (double a, double b, double c) : length(a),height(b){
            cout<<"parameterized constructor"<<endl;
        }
        Box (Box &b){
            length=b.length;
            width=b.width;
            height=b.height;
        }
        void display(){
            cout<<length<<" "<<width<<" "<<height<<endl;
        }
        double getvolume(){
            return length*width*length;
        }

};

int main(){

    Box b1;
    b1.display();
    cout<<b1.getvolume()<<endl;
    Box b2(12.5,4.6,2.5);
    b2.display();
    cout<<b2.getvolume()<<endl;
    Box b3(12.5);
    b3.display();
    Box b4(b2);
    b4.display();
    cout<<b2.getvolume()<<endl;
    return 0;
}
