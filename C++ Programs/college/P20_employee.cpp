#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>

using namespace std;

class EMP
{
    string name;
    int empId;
    double ctno;
    string add;
    int yoj;
    string dept;
public:
    void getData();
    void writeData(ofstream &dout);
    void putData();
    void readData(ifstream &din);
};

void EMP::getData()
{
    cout<<"Enter the Employee Name : ";
    cin>>name;
    cout<<"Enter the Employee ID : ";
    cin>>empId;
    cout<<"Enter the Contact Number : ";
    cin>>ctno;
    cout<<"Enter the Address : ";
    cin>>add;
    cout<<"Enter the Year of Joining : ";
    cin>>yoj;
    cout<<"Enter the Departmwnt Name : ";
    cin>>dept;
}

void EMP::putData()
{
    cout<<"The Employee Name : "<<name<<endl;
    cout<<"The Employee ID : "<<empId<<endl;
    cout<<"The Contact Number : "<<ctno<<endl;
    cout<<"The Address : "<<add<<endl;
    cout<<"The Year of Joining : "<<yoj<<endl;
    cout<<"The Department Name : "<<dept<<endl;
}

void EMP::writeData(ofstream &dout)
{
    dout<<name<<endl;
    dout<<empId<<endl;
    dout<<ctno<<endl;
    dout<<add<<endl;
    dout<<yoj<<endl;
    dout<<dept<<endl;
}

void EMP::readData(ifstream &din)
{
    din>>name;
    din>>empId;
    din>>ctno;
    din>>add;
    din>>yoj;
    din>>dept;
}

int main()
{
    EMP emp;
    ofstream fout("Employee.txt", ios::app);
    ifstream fin("Employee.txt");
    int i=1;
    while(i != 0)
    {
        cout<<"1. Add a Employee Data.\n";
        cout<<"2. Retrive Employees Data.\n";
        cout<<"0. Exit.\n";
        cout<<"Enter your choice.\n";
        cin>>i;
        if(i==1)
        {
            emp.getData();
            emp.writeData(fout);
        }
        else if(i==2)
        {
            fin.seekg(0, ios::beg);
            while(fin)
            {
                emp.readData(fin);
                emp.putData();
            }
            fin.clear();
        }
    }
    fin.close();
    fout.close();
    getch();
    return 0;
}