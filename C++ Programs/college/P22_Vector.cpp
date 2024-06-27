#include<iostream>
#include<conio.h>

using namespace std;

template <class T>
class Vector
{
    T *vec;
    int size;
    public:
    void create();
    void modify();
    void mulscalar();
    void display();
};

template <class T>
void Vector<T>::create()
{
    cout<<"Enter the size of the Vector : ";
    cin>>size;
    vec = new T [size];
    cout<<"Enter the components of the Vector : ";
    for(int i=0; i<size; i++)
        cin>>vec[i];
}

template <class T>
void Vector<T>::modify()
{
    int in;
    T val;
    cout<<"Enter the index to be modified & its modified value: ";
    cin>>in>>val;
    vec[in] = val;

}

template <class T>
void Vector<T>::mulscalar()
{
    int scal;
    cout<<"Enter the scalar to be multiplied : ";
    cin>>scal;
    for(int i=0; i<size; i++)
        vec[i] *= scal;
}

template <class T>
void Vector<T>::display()
{
    int i;
    cout<<"Vector : (";
    for(i=0; i<size-1; i++)
        cout<<vec[i]<<",";
    cout<<vec[i]<<")\n\n";
}

int main()
{ 
    Vector<int> v1;
    v1.create();
    v1.display();
    v1.modify();
    v1.display();
    v1.mulscalar();
    v1.display();
    getch();
    return 0;
}