#include <iostream>
using namespace std;
//ques 4
void test1(int a){
    try{
        if (a%3==0){
            throw a;
        }
    }
    catch(int a){
        cout<<"caught multiple of 3 "<<a<<endl;
        throw a;
    }
    cout<<"OK"<<endl;
}
int main(){
    int input;
    cin>>input;
    
    try{
        test1(input);
        
    }
    catch (int a){
        if (a%5==0){
            cout<<"Problem"<<endl; //caught 5 multiple
        }
        else cout<<"OK";
    }

}