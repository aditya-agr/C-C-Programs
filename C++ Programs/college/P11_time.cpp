#include<iostream>
#include <conio.h>

using namespace std;

class Time
{
    int hour;
    int min;
    public:
        friend istream& operator >>(istream& , Time&);
        friend ostream& operator <<(ostream& , Time&);

        Time operator + (Time t1)
        {
            Time temp;
            temp.min = min + t1.min;
            temp.hour = hour + t1.hour;
            if(temp.min >= 60)
            {
                int count = temp.min/60;
                temp.hour += count;
                temp.min = temp.min%60;
            }
            return temp;
        }

        Time operator - (Time t1)
        {
            Time temp;
            temp.hour = hour - t1.hour;
            if(min < t1.min)
            {
                min += 60;
                temp.hour -= 1;
            }
            temp.min = min - t1.min;
            return temp;
        }

        bool operator < (Time t1)
        {
            if(hour < t1.hour)
                return true;
            else if(hour > t1.hour)
                return false;
            else{
                if(min < t1.min)
                    return true;
                else
                    return false;
            }
        }
};

istream& operator >>(istream& din, Time &t)
{
    cout<<"Enter the hour part : ";
    din>>t.hour;
    cout<<"Enter the minute part : ";
    din>>t.min;
    return din;
}

ostream& operator <<(ostream& dout, Time &t)
{
    dout<<t.hour<<":"<<t.min<<endl;
    return dout;
}

int main()
{
    Time t1, t2, t3, t4;
    cin>>t1;
    cin>>t2;
    t3 = t1 + t2;
    t4 = t1 - t2;
    cout<<"The Sum is : "<<t3;
    cout<<"THe Diference is : "<<t4;
    cout<<"The Comparison is : ";
    if(t1<t2)
        cout<<"The t1 is smaller than t2.";
    else
        cout<<"The t1 is greater than or equal to t2.";
    getch();
    return 0;
}

