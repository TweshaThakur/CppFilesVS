#include <iostream>
using namespace std;

class Circle
{
    public:
    int radius;
    int computeArea(int radius)
    {
        return 3.14*radius*radius;
    }

};
int main()
{
    Circle circle1;
    int r;
    cout<<"Enter radius of the circle - ";
    circle1.radius=r;
    cin>>r;
    cout<<circle1.computeArea(r)<<endl;
    //array of objects
    Circle c[5];
    for (int i=0; i<5; i++)
    {
        cout<<"\nEnter radius value for ";
        cin>>c[i].radius;
    }
    for (int i=0; i<5; i++)
    {
        cout<<c[i].computeArea(c[i].radius)<<endl;
    }
    return 0;
}