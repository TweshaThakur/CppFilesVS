#include <iostream>
using namespace std;

class InvalidAge{
    public:
    int ecode;
    string desc;

    InvalidAge(int e, string d){
        ecode=e; desc=d;
    }
    void display(){
        cout<<"Error code is :"<<ecode<<endl;
        cout<<"Description :"<<desc<<endl;
    }
};
int main(){
    int age; 
    cout<<"Enter your Age "<<endl;
    cin>>age;
    try{
        if (age<=0){
            throw InvalidAge(101,"Negative Age");
        }
        if (age>120){
            throw InvalidAge(102,"Out of range");
        }
        cout<<"Valid age."<<endl;
    }
    catch(InvalidAge e){
        e.display();
    }
}