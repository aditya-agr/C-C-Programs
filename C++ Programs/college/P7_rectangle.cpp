#include<iostream>
#include <conio.h>

using namespace std;

class Rectangle
{
    float len;
    float wid;
    public:
        void setlength(float l);
        void setwidth(float w);
        float perimeter();
        float area();
        void show();
        int sameArea(Rectangle r1);
};

void Rectangle::setlength(float l)
{
    len = l;
}

void Rectangle::setwidth(float w)
{
    wid = w;
}

float Rectangle::perimeter()
{
    return(len + wid);
}

float Rectangle::area()
{
    return(len * wid);
}

void Rectangle::show()
{
    cout<<"Length = " <<len<<endl;
    cout<<"Width = " <<wid<<endl;
}

int Rectangle::sameArea(Rectangle r1)
{
    if(r1.len * r1.wid == len * wid)
        return 1;
    else
        return 0;
}

int main()
{
    Rectangle r1, r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);

    cout<<"Rectangle 1 :\n";
    r1.show();
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Rectangle 2 :\n";
    r2.show();
    cout<<"Perimeter = "<<r2.perimeter() <<endl;
    cout<<"Area = "<<r2.area()<<endl;

    cout<<"Checking area is same or not.\n";
    if(r1.sameArea(r2) == 1)
        cout<<"The Area is Same\n\n\n";
    else
        cout<<"The Area is not Same\n\n\n";

    r1.setlength(15);
    r1.setwidth(6.3);

    cout<<"Rectangle 1 :\n";
    r1.show();
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Rectangle 2 :\n";
    r2.show();
    cout<<"Perimeter = "<<r2.perimeter()<<endl;
    cout<<"Area = "<<r2.area()<<endl;

    cout<<"Checking area is same or not.\n";
    if(r1.sameArea(r2) == 1)
        cout<<"The Area is Same\n";
    else
        cout<<"The Area is not Same\n";

    getch();
    return 0;
}