#include<iostream>
using namespace std;
//generic one catch statement should be last in sequence
void test (int x)
{
    try
    {
           if(x==0) throw x;	//int
 if(x== -1) throw 'x';         // char
 if(x == 1) throw 1.0;	// float
    }
    catch( ... )          // catch all
    {
        cout<<"caught an exception"<<endl;
    }
}
int main()
{
    cout<<"testing generic catch"<<endl;
    test(-1);
    test(0);
    test (1);
    return 0;
    }
