#include <iostream>
using namespace std;

void testMeth(int a, int b){
    try {
        if (a<=0){
            throw 'a';
        }
    }
    catch(int e) {
        cout<<"caught in function catch "<<e<<endl;
    }
};
int main(){
    try {
        testMeth(10,12);
        testMeth(-10,12);
    }
    catch(char e){
        cout<<"caught in main catch "<<e<<endl;
    }
}