#include <iostream>
using namespace std;

class NumCheck{
    public:
    int num;

    void getdata(){
        cout<<"Enter number to check ";
        cin>>num;
    }
    char check(){
        if(num%2==0)
        return 'e';
    else return 'o';
    }
    void display(){
        cout<<"The number is "<<num<<endl;
    }



};
int main(){
    NumCheck check1;
    check1.getdata();
    try {
        check1.checek(){
            
        }
    }
}