#include<iostream>
#include<conio.h>

using namespace std;

template <class T>
void minimum(T arr[], int size)
{
    T min=9999;
    for(int i=0; i<size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    cout<<"Minimum element : "<<min<<endl;
}

int main()
{
    int ar[6] = {13,2,3,56,4,3};
    minimum (ar, 6);
    float ar1[6] = {13.25,2.21,3.55,56.02,4.55,3.5};
    minimum (ar1, 6);
    getch();
    return 0;
}