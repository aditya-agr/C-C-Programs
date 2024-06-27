#include <iostream>
#include <conio.h>

using namespace std;

class Array
{
    int *arr;
    int size;

public:
    friend istream &operator>>(istream &, Array &);
    friend ostream &operator<<(ostream &, Array &);
    int operator [](int x)
    {
        return arr[x];
    }
    Array()
    {
        size = 0;
        arr = new int[size];
    }
    Array(int s)
    {
        size = s;
        arr = new int[size];
    }
    Array(Array &a1)
    {
        arr = a1.arr;
        size = a1.size;
        for (int i = 0; i < a1.size; i++)
            arr[i] = a1.arr[i];
    }
    ~Array()
    {
        delete[] arr;
    }
};

istream &operator>>(istream &din, Array &d)
{
    cout << "Enter the elements of Array : ";
    for (int i = 0; i < d.size; i++)
        din >> d.arr[i];
    return din;
}

ostream &operator<<(ostream &dout, Array &d)
{
    cout << "\nThe elements of Array : \n";
    for (int i = 0; i < d.size; i++)
        dout << d.arr[i] << " ";
    return dout;
}

int main()
{
    int size;
    cout<<"Enter the size of the Array :";
    cin>>size;
    Array a1(size), a2(size);
    cin>>a1;
    cout<<"The First element is "<<a1[0]<<endl;
    cout<<a1;
    a2=a1;
    cout<<a2;
    getch();
    return 0;
}