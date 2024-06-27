#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Inventory
{
    int code;
    float cost;
    public:
    void readData();
    friend void modifyItem(Inventory x[], int si);
    void writeData();
};

void Inventory::readData()
{
    cout<<"Enter the code and cost : ";
    cin>>code>>cost;
}

void modifyItem(Inventory x[], int si)
{
    int cd, cst, i, flag=0;
    cout<<"Enter the code";
    cin>>cd;
    for(i=0; i<si; i++)
    {
        if(x[i].code == cd)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout<<"Enter the new cost : \n";
        cin>>cst;
        x[i].cost = cst;
    }
    else
        cout<<"Item code not found.\n";
}

void Inventory::writeData()
{
    cout<<resetiosflags(ios::right);
    cout<<setiosflags(ios::left)<<setw(20)<<code;
    cout<<setiosflags(ios::right)<<setprecision(5)<<cost<<endl;
}

int main()
{
    Inventory item[3], item1[3];
    fstream file;
    file.open("stock.dat", ios::in | ios::out | ios::binary);
    cout<<"Enter the details of items :-\n";
    int i;
    for(i=0;i<3;i++)
    {
        item[i].readData();
        file.write((char*)&item[i], sizeof(item[i]));
    } 
    file.seekg(0);
    cout<<"\nOUTPUT :-\n";
    for(i=0;i<3;i++)
    {
        file.read((char*)&item1[i], sizeof(item1[i]));
        item1[i].writeData();
    }
    file.close();
    modifyItem(item1, 3);
    getch();
    return 0;
}