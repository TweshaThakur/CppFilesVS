#include <iostream>
using namespace std;

class Sample{
    public:
    Sample(){
        cout<<"constructor called"<<endl;
    }
    ~Sample(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    int n;
    cout<<"ENter no of objects "<<endl;
    cin>>n;
    Sample *obj1= new Sample[n];
    delete [] obj1;
    return 0;
}