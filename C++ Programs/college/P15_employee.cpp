#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Staff
{
    int empcode;
    string name;
public:
    Staff(int no, string n)
    {
        empcode = no;
        name = n;

    }
    void showData()
    {
        cout<<"Staff code : "<<empcode<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

class Teacher : public Staff
{
    string subject;
    string publications;
public:
    Teacher(int no, string n, string s, string p):
        Staff(no, n)
        {
            subject = s;
            publications = p;
        }
    void showData()
    {
        Staff::showData();
        cout<<"Subject : "<<subject<<endl;
        cout<<"Publications : "<<publications<<endl;
    }

};

class Officer : public Staff
{
    char grade;
public:
    Officer(int no, string n, char g):
        Staff(no, n)
        {
            grade = g;
        }
    void showData()
    {
        Staff::showData();
        cout<<"Officer Grade : "<<grade<<endl;
    }
};

class Typist : public Staff
{
    int speed;
public:
    Typist(int no, string n, int sd):
        Staff(no, n)
        {
            speed = sd;
        }
    void showData()
    {
        Staff::showData();
        cout<<"Speed : "<<speed<<endl;
    }
};

class Regular : public Typist
{
public:
    Regular(int no, string n, int sd):
        Typist(no, n, sd)
        {}
    void showData()
    {
        Typist::showData();
    }
};

class Casual : public Typist
{
    int wages;
public:
    Casual(int no, string n, int sd, int w):
        Typist(no, n, sd)
        {
            wages = w;
        }
    void showData()
    {
        Typist::showData();
        cout<<"wages : "<<wages<<endl;
    }   
};

int main()
{
    int c;
    while (c != 0)
    {
        cout<<"Which staff member do you want to join :\n";
        cout<<"1. Teacher.\n";
        cout<<"2. Officer.\n";
        cout<<"3. Typist.\n";
        cout<<"Enter your choice :\n";
        cin>>c;

        switch(c)
        {
            case 1:
            {
                string nm, sb, pb;
                int cd;
                cout<<"Enter the code, name, subject and publications :";
                cin>>cd>>nm>>sb>>pb;
                Teacher t1(cd, nm, sb, pb);
                t1.showData();
                break;
            }
            case 2:
            {
                string nm;
                int cd;
                char gd;
                cout<<"Enter the code, name and grade :";
                cin>>cd>>nm>>gd;
                Officer o1(cd, nm, gd);
                o1.showData();
                break;
            }
            case 3:
            {
                while (c = 3)
                {
                    cout<<"Which Typist are you ..?\n";
                    cout<<"1. Regular.\n";
                    cout<<"2. Casual.\n";
                    cout<<"Enter your choice :\n";
                    char ch;
                    cin>>ch;

                    if(ch == '1')
                    {
                        string nm;
                        int cd, sd;
                        cout<<"Enter the code, name and speed :";
                        cin>>cd>>nm>>sd;
                        Regular r1(cd, nm, sd);
                        r1.showData();
                        break;
                    }
                    else if(ch == '2')
                    {
                        string nm;
                        int cd, sd, wg;
                        cout<<"Enter the code, name, speed and wages :";
                        cin>>cd>>nm>>sd>>wg;
                        Casual c1(cd, nm, sd, wg);
                        c1.showData();
                        break;
                    }
                }
                break;
            }
        }
    }
    getch();
    return 0;
}