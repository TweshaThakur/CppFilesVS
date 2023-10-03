#include<iostream>
using namespace std;
//static methods can not access non static methods
class Student 
{ 
    private:
    int rollNo;
    char name[10];
    int marks;
    public:
    static int objectCount;
    Student() 
    {
        objectCount++;
    }
    void getdata() 
    { 
        cout << "Enter name: "<<endl;
        cin >> name;
        cout << "Enter marks: "<<endl;
        cin >> marks;
    }
    void putdata() 
    {
        cout<<"Roll Number = "<< objectCount <<endl;
        cout<<"Name = "<< name <<endl; 
        cout<<"Marks = "<< marks <<endl;
        cout<<endl; 
    }
    static int getObjectCount()
    {
        return objectCount;
    }
};
int Student::objectCount = 0;
int main(void) 
{
    cout<<Student::getObjectCount();
    Student s1;
    s1.getdata();
    s1.putdata();
    Student s2;
    s2.getdata();
    s2.putdata();
    Student s3;
    s3.getdata();
    s3.putdata();
    cout << "Total objects created = " << Student::objectCount << endl;
    cout<<Student::getObjectCount();
    return 0;
}