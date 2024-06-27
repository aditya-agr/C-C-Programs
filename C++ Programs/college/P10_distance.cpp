#include<iostream>
#include <conio.h>

using namespace std;

class Distance
{
    int m;
    int cm;
    public:
        friend istream& operator >>(istream& , Distance&);
        friend ostream& operator <<(ostream& , Distance&);
        friend Distance operator - (Distance d1, Distance d2);

        Distance operator + (Distance d1)
        {
            Distance temp;
            temp.cm = cm + d1.cm;
            temp.m = m + d1.m;
            if(temp.cm >= 100)
            {
                int count = temp.cm/100;
                temp.m += count;
                temp.cm = temp.cm%100;
            }
            return temp;
        }

        

};

Distance operator - (Distance d1, Distance d2)
{
    Distance temp;
    temp.m = d1.m - d2.m;
    if(d1.cm < d2.cm)
    {
        d1.cm += 100;
        temp.m -= 1;
    }
    temp.cm = d1.cm - d2.cm;
    return temp;
}

istream& operator >>(istream& din, Distance &d)
{
    cout<<"Enter the meter part : ";
    din>>d.m;
    cout<<"Enter the centimeter part : ";
    din>>d.cm;
    return din;
}

ostream& operator <<(ostream& dout, Distance &d)
{
    dout<<d.m<<"."<<d.cm<<endl;
    return dout;
}

int main()
{
    Distance d1, d2, d3, d4;
    int choice=0;
    cin>>d1;
    cin>>d2;
    
    while(choice < 5)
    {
        cout<<"\n\n1. Addition.\n";
        cout<<"2. Display the sum.\n";
        cout<<"3. Subtraction.\n";
        cout<<"4. Display the difference.\n";
        cout<<"5. Exit.\n";
        cout<<"Enter the choice : ";
        cin>>choice;

        if(choice==1)
            d3 = d1 + d2;
        else if(choice==2)
            cout<<"The Sum is : "<<d3;
        else if(choice==3)
            d4 = d1 - d2;
        else if(choice==4)
            cout<<"The Diference is : "<<d4;
    }
    getch();
    return 0;
}

