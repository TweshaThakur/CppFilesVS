//3 class members public
#include <iostream>
using namespace std;

class Water
{
public:
int a , b , add;
void get()
{
    cout<<"Enter first value - ";
    cin>>a;
    cout<<"Enetr second value - ";
    cin>>b;
}
void sum();
}s;
inline void Water:: sum()
{
    add = a+ b;
    cout<<"addition of two members - "<<add;
}

int main() {

cout << "Program using inline function\n"; 
s.get(); 
s.sum(); 
return 0; 
}




