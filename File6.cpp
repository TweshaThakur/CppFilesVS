#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/**
int main()
{
string s="welcome to programming in Java";
int len=s.length();
fstream file;
file.open("test.txt",ios::in|ios::out);
for(int i=0;i<len;i++)
file.put(s[i]);
file.seekg(-10,ios::end);
char ch;
file.get(ch);
while(file.eof()==0)
{
	cout<<ch;
	file.get(ch);
}
return 0;
}**/
/**
class student {
char name[30];
int roll_no; 
float marks;
public:
void getdata() {
cout<<"enter name"; cin>>name;
cout<<"enter rollno"; cin>>roll_no;
cout<<"enter marks"; cin>>marks;
}
void putdata() {
	cout<<name; 
	cout<<roll_no; 
	cout<<marks;
}
};
**/

int main(){

student ob1,ob2;
ob1.getdata();
fstream file; file.open("data.txtshe",ios::in|ios::out); file.write((char*)&ob1,sizeof(ob1));
file.seekg(0);
file.read((char*) &ob2,sizeof(ob2));
ob2.putdata();
}