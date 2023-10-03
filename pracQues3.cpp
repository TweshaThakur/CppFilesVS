#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct AccountData
{
    string name;
    int number;
    float accbalance;
};
void deposit(float& accbalance, float depA)
{
    accbalance+=depA;
    cout<<"Amount deposited successfully";
}
void withdraw(float& accbalance, float widA)
{
    if (widA>accbalance)
    {
        cout<<"Insufficient balance. Withdraw failed.";
    }
    else{
        accbalance-=widA;
    }
}
int main()
{
    AccountData p1;
    float amount2dep,amount2wid;

    cin>>p1.name;
    string part;
    while (cin>>part)
    {
        p1.name+=" "+part;
        if (cin.get()=='\n')
        {
            break;
        }
    }
    cin>>p1.number>>p1.accbalance>>amount2dep>>amount2wid;
    
    deposit(p1.accbalance,amount2dep);
    withdraw(p1.accbalance,amount2wid);

    cout<<"account details:"<<endl;;
    cout<<"Account holder's name: "<<p1.name<<endl;
    cout<<"Account number: "<<p1.number<<endl;
    cout<<"Balance: "<<p1.accbalance<<endl;
}