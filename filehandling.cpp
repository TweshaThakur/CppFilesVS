#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /**ofstream of("result.txt");
    of<<"Hello world ! \n";
    of.close();
    cout<<"Data saved\n";

    char s[100];
    ifstream iof("result.txt");
    iof>>s;
    iof.close();
    cout<<s<<endl;**/
    /**ofstream fout; 
    fout.open("country.txt"); 
    fout<<"india\n"; 
    fout<<"USA\n"; 
    fout<<"UK\n"; 
    fout.close();

    fout.open("capital.txt"); 
    fout<<"Delhi\n"; 
    fout<<"Washington\n"; 
    fout<<"Londan\n"; 
    fout.close();

    const int n=80; 
    char s[n];
    ifstream fin; 
    fin.open("country.txt"); 
    while(fin)
        { 
            fin.getline(s,n); 
            cout<<s<<" ";
        }
    fin.close(); 
    fin.open("capital.txt"); 
    while(fin.eof()==0)   // while(fin)
        { 
            fin.getline(s,n); 
            cout<<s<<" ";
        }
    fin.close();**/

/**char s[30];
ofstream fileout;
ifstream filein; 
fileout.open("data.txt",ios::app); 
fileout<<"hello world"; 
fileout.close();
filein.open("data.txt",ios::in); 
filein.getline(s,30);
filein.close();**/



char s[30];
ofstream fileout;
fstream file; 
fileout.open("hello",ios::out); 
fileout<<"hello world"; 
fileout.close(); 
file.open("hello",ios::in|ios::out); 
cout<<file.tellg(); 
cout<<file.tellp();
file.seekp(6);
file.seekg(6);
cout<<file.tellg(); cout<<file.tellp();
file>>s;
cout<<s;
}