#include <iostream>
using namespace std;

class test{
    public:
    int a ;

    test()
    {
        cout<<"Object is being created "<<endl;
    }
    test(int b){
        a=b;
    }
    ~test(){
        cout<<"Object is being destroyed "<<a<<endl;
    }
};

int main(){
    test t1(10);
    test t2(20);
    cout<<"Program ending"<<endl;
    return 0;
}