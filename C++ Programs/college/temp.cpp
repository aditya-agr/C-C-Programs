// #include<iostream>
// #include<iomanip> 

// using namespace std;

// int main()
// {
//     float f = 12.54761;
//     cout<<setprecision(4)<<f;
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<conio.h>

// using namespace std;

// class Inventory
// {
//     int code;
//     float cost;
//     public:
//     void addItem(fstream &fl);
//     //void modifyItem();
//     void diplay(fstream &fl);
// };

// void Inventory::addItem(fstream &fl)
// {
//     cout<<"Enter the code and cost.";
//     cin>>code>>cost;
//     fl.seekp(0, ios::end);
//     fl<<code<<endl;
//     fl<<cost<<endl;
// }

// void Inventory::diplay(fstream &fl)
// {
//     fl.seekp(0, ios::beg);
//     while (!fl.eof())
//     {
//         fl>>code>>cost;
//         cout<<code<<endl;
//         cout<<cost<<endl;
//     }
// }

// int main()
// {
//     Inventory i1, temp;
//     fstream file;
//     file.open("stock.txt", ios::in| ios::out);
//     i1.addItem(file);
//     //i1.diplay(file);

    
//     getch();
//     return 0;
// }

#include<iostream>
#include<conio.h>

using namespace std;
int isleapYear(int yy)
{
    if(yy%400 == 0){
        return 1;
    }
    else if(yy%100 == 0){
        return 0;
    }
    else if(yy%4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    cout<<isleapYear(2012);
    getch();
    return 0;
}