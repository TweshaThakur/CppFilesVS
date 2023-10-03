#include <iostream>
#include <iomanip>
using namespace std;

// logic to calculate  time diff- conveet all to seconds then subtract
struct Time
{
    int hh,mm,ss;
}t1,t2;
void calcDifference(const Time& t1, const Time& t2, Time& result)
{
    int t1sec=t1.hh*3600 + t1.mm*60 + t1.ss;
    int t2sec=t2.hh*3600 + t2.mm*60 + t2.ss;
    int diffsec=t1sec-t2sec;
    result.hh=diffsec/3600;
    result.mm= (diffsec % 3600)/60;
    result.ss=diffsec %60 ;
    cout<<setfill('0')<<setw(2)<<result.hh<<':'<<setfill('0')<<setw(2)<<result.mm<<':'<<setfill('0')<<setw(2)<<result.ss<<endl;

}
int main()
{
    Time result={0,0,0};
    char delimeter1, delimeter2;
    cin>>t1.hh>>delimeter1>>t1.mm>>delimeter2>>t1.ss;
    cin>>t2.hh>>delimeter1>>t2.mm>>delimeter2>>t2.ss;
    calcDifference(t1,t2,result);

}