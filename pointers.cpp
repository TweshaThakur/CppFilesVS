#include <iostream>
// this pointer
using namespace std;

/**class M

{

int x; int y; public:

void set_xy(int a, int b)

{ x=a; y=b; } friend int sum(M m);

k

int sum(M m)

{

// declare pointer to data member 
int M :: *px =8&M :: x;

int M:: *py=&M::y;

M *pm=8&m;

int S = m.*px + pm->*py; return S;

}

};


int main()
{
    M n;

//declare pointer to member function
void (M :: *pf)(int,int) = &M :: set_xy;

// call member 
function (n.*pf)(10,20);
cout<<"SUM="<<sum(n) ;

M *op = &n;
(op->*pf)(30,40);
cout<<"SUM="<<sum(n);
return 0;
}**/
/**wild pointer 
int main(){
    int var1=60, var2=70;
    int* const ptr=&var1;
    cout<<*ptr;
    ptr=&var2;
    cout<<*ptr;
    return 0;
}**/
int main()
{
    //wild pointer
    int *p=new int[1]
}int a=10;// dagling pointer - garbage value
cout << ptr<,endl;
for(int i-0; i Mn; i++){
    
}
return 0;