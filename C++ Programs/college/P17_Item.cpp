#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Item
{
public:
    string name;
    int code;
    float cost;
    void showData()
    {
        cout<<resetiosflags(ios::right);
        cout<<setiosflags(ios::left)<<setw(20)<<name;
        cout<<setiosflags(ios::left)<<setw(20)<<code;
        cout<<setiosflags(ios::right|ios::showpoint|ios::fixed)<<setw(10)<<setprecision(3)<<cost<<endl;
    }
};

int main()
{
    Item it[5];
    ifstream fin("Item.txt");
    //fstream file;
    //file.open("Item.txt", ios::in);
    int i;
    for (i = 0; i < 5; i++)
         //file.read((char*)&it[i], sizeof(it[i]));
    {
        if(fin.eof())
            break;
        fin>>it[i].name;
        fin>>it[i].code;
        fin>>it[i].cost;
    }
    fin.close();
    //file.close();

    cout<<setiosflags(ios::left)<<setw(20)<<"NAME";
    cout<<setiosflags(ios::left)<<setw(20)<<"CODE";
    cout<<setiosflags(ios::right)<<setw(10)<<"COST"<<endl;
    cout<<"______________________________________________________"<<endl;
    for(int j=0; j<5; j++)
    {
        if(j<i-1)
            it[j].showData();
        else
            cout<<"-----               -----                   ------\n";    
    }
    cout<<"______________________________________________________"<<endl;
    
    getch();
    return 0;
}