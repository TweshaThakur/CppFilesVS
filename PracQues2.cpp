#include <iostream>
#include <iomanip>
using namespace std;
// use constructor 

/**static int cntr=0;
class box
{
    double length, breadth,height;
    public:
    void calculateVolume(){
        cout<<"Enter l, b , h - ";
        cin>>length;
        cin>>breadth;
        cin>>height;
        cout<<"volume - "<<length*breadth*height<<endl;
    }
    box()
    {cntr++;}
    static void getcount()
    {
        cout<<"number of times objects creeated - "<<cntr<<endl;
    }
    
    

};
int main()
{
    box b1;
    b1.calculateVolume();
    box::getcount();
    return 0;
}**/

//add static member cntr to count number of objects created
//add static static member function getcount() to  return count of static objects 

/**int sum(int x,int y,int z=0,int w=0)
{
    return x+y+z+w;
}
int main()
{
    cout<<sum(10,15)<<endl;
    cout<<sum(10,15,25)<<endl;
    cout<<sum(10,15,25,30)<<endl;
}**/

/**int main(){
    int n;
    cin>>n;
    cout<<"octa - "<<oct<<n<<endl;
    cout<<"hexa - "<<hex<<n<<endl;
    cout<<setbase(10)<<n;
}**/

//