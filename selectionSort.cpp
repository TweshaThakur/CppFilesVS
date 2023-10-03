#include <iostream>
using namespace std;

void selectSort(int a[],int n)
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        int min=i;
        for (int j=i+1; j<n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        }
        if (a[i]!=a[min])
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n;i++)
    {
        cin>>array[i];
    }
    selectSort(array,n);
    cout<<endl;
}

