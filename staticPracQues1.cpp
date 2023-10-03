#include <iostream>
using namespace std;

static int objectCount;
// program to calculate area of circles using static data members and static member functions
class circle
{
    static int r;

    static int computeArea(int radius)
    {
        return 3.14*radius*radius;
    }
    public:
    circle() {objectCount++;}
    static void getData()
    {
        cout<<"Enter radius of the circle - ";
        cin>>r;
        cout<<computeArea(r)<<endl;
    }
    
};
int circle::r = 0; // Definition of the static member variable r

// program to calculate factorial of a number usning static member function
class mathCalc
{
    static int num;
    static int factorial(int n)
    {
        if (n==0 || n==1){return 1;}
        else return n*factorial(n-1);
    }
    public:
    mathCalc(){objectCount++;}
    static void get()
    {
        cout<<"Enter number to find it's factorial - ";
        cin>>num;
        cout<<"factorial of number is - "<< factorial(num)<<endl;


    }
};
int mathCalc::num = 0; // Definition of the static member variable num
//also count number of times object is created
int main()
{
    //circle c1;
    circle::getData();
    //mathCalc num1;
    mathCalc::get();
    cout<<"Number of objects created are - "<<objectCount<<endl;
    return 0;
}