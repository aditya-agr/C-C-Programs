#include<iostream>
#include<conio.h>

using namespace std;

class Integer
{
    double a, b;
    public:
    void getDAta();
    void Division();
};

void Integer::getDAta()
{
    cout<<"Enter the two double numbers :";
    cin>>a>>b; 
}

void Integer::Division()
{
    try
    {
        if (cin.fail())
            throw ("Wrong Input!!");
        if(b != 0)
        {
            double div = a/b;
            cout<<"The Division of numbers : "<<div<<endl;
        }
        else
            throw(b);
    }
    catch(double x)
    {
        cout<<"Division by zero Error has occured.";
    }
    catch(char const *Str)
    {
        cout<<"Wrong Input Error has occured.";
    }
}

int main()
{
    Integer i1;
    i1.getDAta();
    i1.Division();
    getch();
    return 0;
}