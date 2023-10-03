#include <iostream>
using namespace std;

void swap(int &a , int &b)
{
    cout<<"Before swapping: "<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: "<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
}
int main()
{
    int x=10, y=20;
    swap(x,y);
    cout<<"x: "<<x<<"y: "<<y<<endl;
}
