#include<iostream>
#include <conio.h>

using namespace std;

int volume(int l, int b, int h)
{
    return l*b*h;
}

double volume(double r)
{
    return (4*3.14*r*r*r/3);
}

float volume(int r, int h)
{
    return(3.14*r*r*h);
}

int main()
{
    int len, bre, hei;
    cout<<"Enter the length, breadth and height :";
    cin>>len>>bre>>hei;
    cout<<"The Volume Of Cuboid = "<<volume(len, bre, hei)<<"\n\n";

    double radius;
    cout<<"Enter the radius :";
    cin>>radius;
    cout<<"The Volume Of Sphere = "<<volume(radius)<<"\n\n";

    int rad, height;
    cout<<"Enter the radius and height :";
    cin>>rad>>height;
    cout<<"The Volume Of Cylinder = "<<volume(rad, height);
    
    getch();
    return 0;
}