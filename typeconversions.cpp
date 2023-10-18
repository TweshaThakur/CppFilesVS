#include <iostream>
using namespace std;

class Time{
    int hrs;
    public:
    Time(int t){
        hrs=t/60;
        cout<<hrs<<endl;
    }
};
int main(){
    int x;
    float y=100.0;
    x=y;
    cout<<x;
    cout<<endl;

    Time t1=85;
    Time t2=120;
}