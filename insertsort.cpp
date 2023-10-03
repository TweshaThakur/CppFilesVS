#include <iostream>
using namespace std;

void insertsort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j,x;
        j=i-1;
        x=a[i];
        while (j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;

    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
};
int main()
{
    int size;
    cin>>size;
    int array[size];
    for (int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    insertsort(array,size);
}