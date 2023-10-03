#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    double cgpa;
    string name;
    int mathMark;
};
//can declare 5 as global constant
//write function which will find topper among all
const int sz=3;
int main()
{
    Student s1[sz];
    int topScore=0;
    int index;
    for (int i=0; i<sz; i++)
    {
        cin>>s1[i].rollno;
        cin>>s1[i].cgpa;
        cin>>s1[i].name;
        cin>>s1[i].mathMark;


    }
    cout<<"\n";
    for (int i=0; i<sz; i++)
    {
        cout<<s1[i].name<<endl<<s1[i].rollno<<endl<<s1[i].cgpa<<endl<<s1[i].mathMark<<endl;
    }
    for(int i=0; i<sz;i++)
    {
        if (s1[i].mathMark>topScore)
        {
            topScore=s1[i].mathMark;
            index=i;
        }
    }
    cout<<"Topper Name - "<<s1[index].name<<endl<<"Topper Marks - "<<topScore<<endl;

    return 0;

}