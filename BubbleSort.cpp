#include <iostream>
using namespace std;

int main()
{
    int array[]={7,8,2,3,5};
    int n=5,temp;

    for (int i=0; i<n-1 ; i++)
    {
        for (int j=0 ; j<n-1-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for (int i=0; i<n ;i++)
    {
        cout<<array[i]<<" ";
        cout<<endl;
    }
}