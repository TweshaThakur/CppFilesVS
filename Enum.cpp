#include <iostream>
using namespace std;


/**void display( char='*',int=1);
int main()
{
    cout<<"no arguments passed\n";
    display();
    cout<<"First aegumwnt passed\n\n";
    display('#');
    cout<<"Both argument passed";
    display('$',5);
    return 0;
}
void display(char c, int n)
{
    for (int i=1; i<=n; ++i)
    {
        cout<<c;
    }
    cout<<endl;
}
**/
/**
int main()
{
    enum days{sun,mon,tue,wed,thus,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<"/t"<<day2;
    if(day1>day2)
    {
        cout<<"Sunday comes after Friday";
    }
    else cout<<"Friday comes after sunday";
}
**/
#include<iostream>
using namespace std;
class Year{
public:
    enum Month {
        JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,
        JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
    };
    void setMonth(Month month){
        currentMonth=month;
    }
    Month getMonth(){
        return currentMonth;
    }
    string getMonthString(Month month) {
        switch (month) {
            case JANUARY: return "JANUARY";
            case FEBRUARY: return "FEBRUARy";
            case MARCH: return "MARCH";
            case APRIL: return "APRIL";
            case MAY: return "MAY";
            case JUNE: return "JUNE";
            case JULY: return "JULY";
            case AUGUST: return "AUGUST";
            case SEPTEMBER: return "SEPTEMBER";
            case OCTOBER: return "OCTOBER";
            case NOVEMBER: return "NOVEMBER";
            case DECEMBER: return "DECEMBER";
            default: return "Invalid month";
        }
    }
private:
    Month currentMonth;
};
int main(){
    Year year;
    int month;
    cin>>month;
    if(month>=1 && month<=12){
        Year::Month selectedMonth = static_cast<Year::Month>(month-1);
        year.setMonth(selectedMonth);
    cout<<"Month: "<<year.getMonthString(year.getMonth())<<endl;
    }else{
        cout<<"Invalid month input"<<endl;
    }
}