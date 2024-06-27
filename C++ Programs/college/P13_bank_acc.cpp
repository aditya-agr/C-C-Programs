#include<iostream>
#include<conio.h>

using namespace std;

class BankAccount
{
    string name;
    int accno;
    string type;
    int bal;
    public:
        BankAccount()
        {
            type ="Saving";
        }
        BankAccount(string n, int no, string ty, int b)
        {
            name = n;
            accno = no;
            type = ty;
            bal = b;
        }
        void inputData();
        void Deposit(int am);
        void Withdraw();
        void Display();
};

void BankAccount::inputData()
{
    cout<<"Enter the Name of Account Holder :";
    cin>>name;
    cout<<"Enter the Account Number :";
    cin>>accno;
    cout<<"Enter the Account Type :";
    cin>>type;
    cout<<"Enter the Account Balance :";
    cin>>bal;
}

void BankAccount::Deposit(int am)
{
    bal = bal + am;
    cout<<"Your Amount has been Deposited."<<endl;
}

void BankAccount::Withdraw()
{
    int am;
    cout<<"The Current Balance : "<<bal<<endl;
    cout<<"Enter the Amount :";
    cin>>am;
    bal = bal-am;
    cout<<"Your Amount has been Withdrawal."<<endl;
}

void BankAccount::Display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Balance : "<< bal<<endl;
}


int main()
{
    int am;
    BankAccount a1("Aman", 1021, "Current", 12000), a2;
    a1.Display();
    a2.inputData();
    cout<<"Enter the amount to be deposited : ";
    cin>>am;
    a2.Deposit(am);
    a2.Display();
    a2.Withdraw();
    a2.Display();
    getch();
    return 0;
}