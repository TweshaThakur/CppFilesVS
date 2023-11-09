#include <vector>
#include <iostream>
using namespace std;
int main()
{
int arr[] = { 12, 3, 17, 8 };  // standard C array
vector<int> v(arr, arr+4);  // initialize vector with C array 
for (vector<int>::iterator i=v.begin(); i!=v.end(); i++)
// initialize i with pointer to first element of v
// i++ increment iterator, move iterator to next element
{
    cout << *i << " ";   // de-referencing iterator returns the
                             // value of the element the iterator points at 
}
cout << endl;
}