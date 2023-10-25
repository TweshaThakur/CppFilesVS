#include<iostream>
using namespace std;
//multiple catch statements

void Test(int x)
{
	try
	{	if(x==1) throw x;		//int
		else if(x==0) throw 'x';		//char
		else if (x== -1) throw 1.0;	//double
		cout<<"End of try block";
	}
	catch(char c)				//catch 1
	{	cout<<"caught a character"<<endl;}
	catch(int m)
	{	cout<<"caught an integer"<<endl;}
	catch(double d)
	{	cout<<"caught a double"<<endl;}
	cout<<"End of try-catch system"<<endl;
}
int main()
{
cout<<"testing multiple catches";
cout<<"x==1";
Test(1);
cout<<"x==0";
Test(0);
cout<<"x==-1";
Test(-1);
cout<<"x==2";
Test(2);	//does not throw any exception
return 0;			
}