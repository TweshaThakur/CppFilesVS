#include<iostream>
using namespace std;

char c='a';
// by default private
// create a class student roll no int name string public cgpa double a public , public methods add functions - get data() print data() printcgpa() setcgpa(double a)
class Student
{
    int rollno;
    string name;
    public:
    double cgpa;

    void getData()
    {
        cout<<"Enter name - ";
        cin>>name;
        cout<<"Enter roll no - ";
        cin>>rollno;
        cout<<"Enter cgpa - ";
        cin>>cgpa;
    }
    void printData()
    {
        cout<<name<<"\n";
        cout<<rollno<<"\n";
        cout<<cgpa<<"\n";

    }
    void printCGPA()
    {
        cout<<cgpa<<"\n";
    }
    void setCGPA()
    {
        cout<<"Enter new cgpa : ";
        cin>>cgpa;
    }

} ;

class MyFirstClass
{
    int a;
public :
int b=9;
    void get()
    {
        cout<<"enter value of a\n";
        cin>>a;
    }
    void print()
    {
        cout<<"the value is "<<a<<endl;
    }
    void hi();
}; // classes end with semi colon

void MyFirstClass ::hi()
{
    cout<<"hi :) "<<endl;
}
int main ()
{
    MyFirstClass mfc1; //create 1 object
    
    Student student1, student2;
    student1.getData();
    student1.printData();
    student1.printCGPA();
    student1.setCGPA();
    student1.printCGPA();
    /**mfc1.get();
    mfc1.print();
    cout<<mfc1.b<<endl;
    char c='b';
    cout<<"Local variable - "<<c<<"\n";
    cout <<"Global variable - " << ::c<<"\n"; //using scope resolution operator
    mfc1.hi();**/
    return 0;
}
