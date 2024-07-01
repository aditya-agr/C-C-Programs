#include <iostream>
#include <string.h>
using namespace std;

class staff
{
protected:
    string code_name;

public:
    void set_codename()
    {
        cout << "Enter code name: ";
        cin >> code_name;
    }

    void show_codename()
    {
        cout << "Staff: " << code_name << endl;
    }
    
    string codename()
    {
        return code_name;
    }
};

class teacher : public staff
{
protected:
    string subject_pub;

public:
    void set_subpub()
    {
        cout << "Enter subject publication: ";
        cin >> subject_pub; 
    }

    void show_subpub()
    {
        show_codename();
        cout << "Subject publication: " << subject_pub << endl;
    }
};

class officer : public staff
{
protected:
    string grade;

public:
    void set_grade()
    {
        cout << "Enter grade:";
        cin >> grade;
    }

    void show_grade()
    {
        show_codename();
        cout << "Grade: " << grade << endl;
    }
};

class typist : public staff
{
protected:
    string speed;

public:
    void set_speed()
    {
        cout << "Enter typing speed(regular/casual): ";
        cin >> speed;
    }

    void show_speed()
    {
        cout << "Speed: " << speed << endl;
    }

    string speed_()
    {
        return speed;
    }
};

class regular : public typist
{
public:
    void show_speedreg()
    {
        show_codename();
        show_speed();
    }
};

class casual : public typist
{
protected:
    int daily_wages;

public:
    void enter_dw()
    {
        cout << "Enter daily wages: ";
        cin >> daily_wages;
    }
    void show_speed_cas()
    {
        show_codename();
        show_speed();
        cout << "Daily wages: " << daily_wages << endl;
    }
};

int main()
{
    staff s1;
    s1.set_codename();
    s1.show_codename();
    if (s1.codename() == "teacher")
    {
        teacher t1;
        t1.set_subpub();
        t1.show_subpub();
    }

    else if (s1.codename() == "officer")
    {
        officer o1;
        o1.set_grade();
        o1.show_grade();
    }

    else if (s1.codename() == "typist")
    {
        typist ty1;

        ty1.set_speed();

        if (ty1.speed_() == "regular")
        {
            regular r1;
            r1.show_speedreg();
        }

        else if (ty1.speed_() == "casual")
        {
            casual c1;
            c1.enter_dw();
            c1.show_speed_cas();
        }

        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}