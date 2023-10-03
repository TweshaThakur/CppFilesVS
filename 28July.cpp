

// cout and cin --- printf and scanf

#include<iostream>
using namespace std;
int mySum(int x, int y)
{
return x+y;
}
int main()
{
int a=10; 
int b=20;
cout<<mySum(a,b);
//cout<<a+b<<"\n";
int m,n;
cout<<"enter 2 numbers for summation";
cin>>m>>n;
cout<<mySum(m,n);
cout<<"\nThis is first line";
cout<<"\nThis is second line";
cout<<"\nWelcome to C++"<<endl;
return 0;
}
