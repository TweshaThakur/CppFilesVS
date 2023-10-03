#include <iostream>
using namespace std;
// requires lesser memory but when data taken outputs right result only for last taken data set.
union Student
{
    int rollno;
    double cgpa;
    int mathMark;
};
//write function which will find topper among all
int main () 
{
    Student s1;

    cin>>s1.rollno;
    cout<<s1.rollno<<endl;

    cout<<"-----------------------"<<endl;

    cin>>s1.cgpa;
    cout<<s1.cgpa<<endl;
    cout<<"-----------------------"<<endl;

    cin>>s1.mathMark;
    cout<<s1.mathMark<<endl;
    
    
    
    
}