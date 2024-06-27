#include<iostream>
#include <conio.h>

using namespace std;

int isleapYear(int yy)
{
    if(yy%400 == 0)
        return 1;
    else if(yy%100 == 0)
        return 0;
    else if(yy%4 == 0)
        return 1;
    else
        return 0;
}

class Date
{
    int dd, mm, yy;
    public:
        friend istream& operator >>(istream& , Date&);
        friend ostream& operator <<(ostream& , Date&);
        Date()
        {
            dd = mm = yy = 1;
        }

        Date(int d, int m, int y)
        {
            dd = d;
            mm = m;
            yy = y;
        }
        Date operator ++ ()
        {
            dd++;
            if(mm == 4 || mm == 6 || mm == 9 || mm == 11  && dd > 30)
            {
                mm++;
                dd = dd - 30;
            }
            else if (mm == 2 && dd > 28)
            {
                if(isleapYear(yy) && dd > 29)
                {
                    mm++;
                    dd = dd - 29;
                }
                else if(isleapYear(yy) && dd == 29)
                {}
                else
                {
                    mm++;
                    dd = dd - 28;
                }
            }
            else if(dd > 31)
            {
                mm++;
                dd = dd - 31;
            }

            if (mm > 12)
            {
                yy++;
                mm = mm - 12;
            }
            return *this;
        }
};

istream& operator >>(istream& din, Date &d)
{
    cout<<"Enter the day : ";
    din>>d.dd;
    cout<<"Enter the month : ";
    din>>d.mm;
    cout<<"Enter the year : ";
    din>>d.yy;
    return din;
}

ostream& operator <<(ostream& dout, Date &d)
{
    dout<<d.dd<<":"<<d.mm<<":"<<d.yy<<endl;
    return dout;
}

int main()
{
    Date d1, d2(28, 02, 2000);
    d1 = ++d2;
    cout<<d1<<d2;
    getch();
    return 0;
}