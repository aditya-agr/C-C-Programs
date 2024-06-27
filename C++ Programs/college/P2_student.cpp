#include <iostream>
#include <conio.h>

using namespace std;

class student
{
private:
    int admno;
    char sname[20];
    float eng, maths, science, total;

public:
    float ctotal()
    {
        total = eng + maths + science;
        return total;
    }
    void takeinput()
    {
        cin >> admno;
        cin >> sname;
        cin >> eng >> maths >> science;
    }
    void showdata()
    {
        cout << "The Admission number is " << admno << endl;
        cout << "The Name is " << sname << endl;
        cout << "The English marks is " << eng << endl;
        cout << "The Maths marks is " << maths << endl;
        cout << "The Science marks is " << science << endl;
    }
};
int main()
{
    class student stu1;
    float total;
    cout << "Enter the details " << endl;
    stu1.takeinput();
    total = stu1.ctotal();
    cout << "\nThe total is " << total << "\n\n";
    stu1.showdata();
    getch();
    return 0;
}
