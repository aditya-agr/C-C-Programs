#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Account
{
    protected:
    string name;
    int accno;
    string type;
    int bal;
    public:
        Account()
        {
            type ="Saving";
        }
        Account(string n, int no, string ty, int b)
        {
            name = n;
            accno = no;
            type = ty;
            bal = b;
        }
        void Deposit();
        void Withdraw();
        void Display();
};

class Cur_acc:public Account
{
    public:
    void minimum_bal();
    Cur_acc(string n, int no, int b):
    Account(n, no, "Current", b)
    {
    }
};

class Sav_acc:  public Account
{
    public:
    void compute_interest(int rate, int time);
    Sav_acc(string n, int no, int b):
    Account(n, no, "Saving", b)
    {
    }
};

void Account::Deposit()
{
    int am;
    cout<<"Enter the amount to be deposited : ";
    cin>>am;
    bal = bal + am;
    cout<<"Your Amount has been Deposited."<<endl;
}

void Account::Withdraw()
{
    int am;
    cout<<"The Current Balance : "<<bal<<endl;
    cout<<"Enter the Amount :";
    cin>>am;
    if(am <= bal)
    {
        bal = bal - am;
        cout<<"Your Amount has been Withdrawal."<<endl;
    }
    else
        cout<<"Insufficient Balance.\n";
}

void Account::Display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Balance : "<< bal<<endl;
}

void Sav_acc::compute_interest(int rate, int time)
{
    float rat = 1 + rate/100.0;
    bal = bal * pow(rat, time);
    cout<<"Amount has been Updated.\n";
}

void Cur_acc::minimum_bal()
{
    if(bal < 2500)
    {
        bal = bal-500;
        cout<<"Penality is imposed of Rs.500 due to less amount than minimum balance.\n";
    }
    else
        cout<<"Account is uptodate.\n";
}

int main()
{
    Cur_acc a1("Aman", 23434356, 5000);
    a1.Display();
    a1.Deposit();
    a1.Display();
    a1.Withdraw();
    a1.Display();
    a1.minimum_bal();
    a1.Display();
    cout<<endl;

    Sav_acc a2("Amit", 234353436, 3400);
    a2.Display();
    a2.Deposit();
    a2.Display();
    a2.Withdraw();
    a2.Display();
    a2.compute_interest(24, 3);
    a2.Display();
    getch();
    return 0;
}