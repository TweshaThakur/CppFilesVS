#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//wap to count number of lines, spaces, vowels consonants newline characters in a file.
//wap to copy elements of a text file f1 to f2

    
int main()
{
    int n;
    char s[100];
    cout<<"Enter number to print it's table - ";
    cin>>n;
    ofstream file("table.txt");
    for (int i=1; i<11 ;i++){
        file<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
    file.close();
    ifstream jp;

    jp.open ("table.txt",ios::in);

    while(jp.eof()==0){
        jp.getline(s,10);
        cout<<s<<endl;
    }

    jp.close();

//=============================================
    

} 