#include<iostream>
#include <conio.h>
#include<string>

using namespace std;

class Student
{
    string name;
    int enrollno;
    static int rollno;
    int theory[5];
    int practical[5];
    char grade[6];

    void CALGRADE()
    {
        int temp;
        for(int i=0; i<5; i++)
        {
            temp = theory[i] + practical[i];
            if(temp > 90)
                grade[i] = 'O';
            else if (temp > 80)
                grade[i] = 'A';
            else if (temp > 70)
                grade[i] = 'B';
            else if (temp > 60)
                grade[i] = 'C';
            else if (temp > 50)
                grade[i] = 'D';
            else if (temp > 40)
                grade[i] = 'E';
            else
                grade[i] = 'F';

        }
    }

    public:
        friend istream& operator >>(istream& , Student&);
        friend ostream& operator <<(ostream& , Student&);
        Student()
        {
            name.clear();
            enrollno = 0;    
            rollno++;
        }
        Student(string n)
        {
            name = n;
            rollno++;
        }
        Student(string n, int eno)
        {
            name = n;
            enrollno = eno;
            rollno++;
        }
};
int Student::rollno;

istream& operator >>(istream& din, Student &s)
{
    if(s.name.empty())
    {
        cout<<"\nEnter the Student Name : ";
        din>>s.name;
    }
    if(s.enrollno == 0)
    {
        cout<<"\nEnter the Enrollment No. : ";
        din>>s.enrollno;
    }
    cout<<"\nEnter the Theory Marks of 5 Subjects : \n";
    int i;
    for(i=0;i<5;i++)
        din>>s.theory[i];

    cout<<"\nEnter the Practical Marks of 5 Subjects : \n";
    for(i=0;i<5;i++)
        din>>s.practical[i];
    s.CALGRADE();
    return din;
}

ostream& operator <<(ostream& dout, Student &s)
{
    dout<<"Student's Name : "<<s.name<<endl;
    dout<<"Enrollment No. : "<<s.enrollno<<endl;
    dout<<"Roll No. : "<<s.rollno<<endl;
    dout<<"Theory Marks :  Practical Marks :  Total Marks :  Grade\n";
    int i;
    for(i=0;i<5;i++)
        cout<<"    "<<s.theory[i]<<"               "<<s.practical[i]<<"                "<<s.theory[i]+s.practical[i]<<"          "<<s.grade[i]<<endl;
    return dout;
}

int main()
{
    Student s1;
    Student s2("Aman", 1920840);
    cin>>s1;
    cout<<s1;
    cin>>s2;
    cout<<s2;
    getch();
    return 0;
}