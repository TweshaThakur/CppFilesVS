#include <iostream>
using namespace std;

class student{
    private:
    int rollno;
    float fees;

    public:
    student(int a , float m){
        rollno=a;
        fees=m;
    }
    operator int(){return rollno;}
    operator float(){return fees;}
};
int main(){
    int j;
    float f;
    student st(50,45.67);

    j=st;
    f=st;

    cout<<"Value of j "<<j<<endl;
    cout<<"Value of f "<<f<<endl;
}
/**class Time{
    int hrs;
    public:
    Time(int t){
        hrs=t/60;
        cout<<hrs<<endl;
    }
};
int main(){
    //basic to basic
    int x;
    float y=100.0;
    x=y;
    cout<<x;
    cout<<endl;
    //basic to class using constructor
    Time t1=85;
    Time t2=120;

    //class type to basic type using casting opereator


}**/