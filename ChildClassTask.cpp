#include <iostream>
using namespace std;

class student{
    private:
    string name;
    protected:
    int rollno;
    public:
    char sec;
    student() {cout<<"0 arg constructor student"<<endl;}
    student(string a, int b, char c){name=a;rollno=b;sec=c;}
    void show(){
        cout<<"Name - "<<name<<endl;
        cout<<"Roll no - "<<rollno<<endl;
        cout<<"Section - "<<sec<<endl;
    }
};

class EnggStudent: public student{
    public:
    string spec;
    EnggStudent(){cout<<"0 arg constructor Engineering Student"<<endl;}
    EnggStudent(string c,int k){spec=c;rollno=k;}
    void show1(){
        cout<<rollno<<endl;
        cout<<spec<<endl;
    }
};
class ArtsStudent: protected student{
    public:
    ArtsStudent(){cout<<"0 arg constructor Arts Student"<<endl;}
    void show2(){
        cout<<rollno<<endl;
        cout<<sec<<endl;
    }
};

class MedicalStudent: private student{
    public:
    MedicalStudent(){cout<<"0 arg constructor Medical Student"<<endl;}
    void show3(){
        cout<<rollno<<endl;
        cout<<sec<<endl;
    }
};

int main(){
    EnggStudent pupil("CyberSec",12);
    pupil.show1();
    ArtsStudent pupil2;
    pupil2.show2();
    MedicalStudent pupil3;
    //pupil3.show3();
}