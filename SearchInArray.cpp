#include <iostream>
using namespace std;
int main()
{
    int array[100],n,d,loc=-1;
    cout<<"Enter size of array";
    cin>>n;
    for (int i=0 ; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter desired element: ";
    cin>>d;
    for (int i=0 ; i<n; i++)
    {
        if (array[i]==d) loc=i;
        
    }
    if(loc==-1) cout<<"Element not found";
    else cout<<"Element found at "<<loc<<endl;

}