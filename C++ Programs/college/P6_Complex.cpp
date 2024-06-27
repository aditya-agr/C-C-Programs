#include<iostream>
#include <conio.h>

using namespace std;

class Complex
{
    float real;
    float imag;

    public:
        Complex()
        {
            real = imag = 0;
        }
        Complex (float r, float i)
        {
            real = r;
            imag = i;
        }
        Complex (float a)
        {
            real = imag = a;
        }
        void set(float r, float i);
        void getData();
        void displayData();
        Complex sum(Complex c);
};

void Complex::set(float r, float i)
{
    real = r;
    imag = i;
}

void Complex::getData()
{
    cout<<"Enter The real part :";
    cin>>real;
    cout<<"Enter The imaginary part :";
    cin>>imag; 
}

void Complex::displayData()
{
    cout<<real<<" + i"<<imag<<endl;
}

Complex Complex::sum(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3 = c2.sum(c1);
    c1.displayData();
    c2.displayData();
    cout<<"____________\n";
    c3.displayData();
    
    getch();
    return 0;
}