#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int *arr;
    int size;
    cout<<"Enter size of array "<<endl;
    cin>>size;
    cout<<"Creating new array"<<endl;
    arr = new int[size];

    if (arr==NULL){
        cout<<"Problem iin memory allocation ";
        exit(1);
    }else{
        cout<<"Dynamic allocation of memory successful"<<endl;
        cout<<"ENter array elements: "<<endl;
        for(int i=0; i<size; i++){
            cin>>*(arr+i);
        }
    
    cout<<"Entered elements are "<<endl;
    for(int i=0; i<size; i++){
        cout<<"\n"<<*(arr+i);
    }
    }

    delete []arr;
    cout<<"\nMemory deallocacted"<<endl;
}