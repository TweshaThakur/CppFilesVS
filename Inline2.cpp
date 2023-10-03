//multiplication values and cubic values using inline function
#include <iostream>
using namespace std;

class arithmatic
{
    public:
    int  a , b,c,cube,product;
    void get()
    {
        cout<<"enter side value to get cube - ";
        cin>>a;
        cout<<"Enter side a , side b to get multiplication value - ";
        cin>>b>>c;
    }
    void cuber();
} m;
inline void arithmatic::cuber()
{
    cube =a*a*a;
    product=b*c;
    cout<<"cube - "<<cube<<endl;
    cout<<"product -"<<product<<endl;


}
int main()
{
    cout << "Program using inline function\n"; 
    m.get(); 
    m.cuber(); 
return 0;
}