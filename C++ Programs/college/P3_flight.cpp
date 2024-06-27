#include<iostream>
#include <conio.h>


using namespace std;

class flight{
    private:
        int flightno;
        string dest;
        float distance;
        float fuel;

        float CALFUEL(){
            if(distance <= 1000)
                fuel = 500;
            else if (distance <= 2000 && distance >= 1000)
                fuel = 1100;
            else
                fuel = 2200;
            return fuel;
        }

    public:
        
        void FEEDINFO(){
            cout << "Enter the Flight No. :\n";
            cin >> flightno;
            cout << "Enter the Destination :\n";
            cin >> dest;
            cout << "Enter the Distance :\n";
            cin >> distance;
            fuel = CALFUEL();
        }

        void SHOWINFO(){
            cout<<"The Flight number is "<< flightno << endl;
            cout<<"The Destination is "<< dest << endl;
            cout<<"The Distance is "<< distance << endl;
            cout<<"The Fuel is "<< fuel << endl;
        }
};

int main()
{
    float fuel1;
    class flight aero1;
    aero1.FEEDINFO();
    aero1.SHOWINFO();
    getch();
    return 0;
}