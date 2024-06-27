#include <iostream>
#include <conio.h>

using namespace std;

class Compare
{
    int arr[5];

public:
    void getData()
    {
        int i;
        cout << "Enter the 5 numbers : \n";
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }
    void display()
    {
        cout << "The 5 numbers are : \n";
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    void minMax()
    {
        int min, max = 0;
        for (int i = 0; i < 5; i++)
        {
            if (max < arr[i])
                max = arr[i];
            if (min > arr[i])
                min = arr[i];
        }
        cout << "The Maximum number is " << max << endl;
        cout << "The Minimum number is " << min << endl;
    }
    void AverageSum()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += arr[i];

        int average = sum / 5;
        cout << "The Sum of number is " << sum << endl;
        cout << "The Average of number is " << average << endl;
    }
    void search()
    {
        int i, search, count = 0, index[5];
        cout << "Enter the number to search : ";
        cin >> search;
        for (i = 0; i < 5; i++)
        {
            if (search == arr[i])
            {
                index[count] = i;
                count++;
            }
        }
        cout << "The Searched number is found at " << count << " positions i.e." << endl;
        for (i = 0; i < count; i++)
            cout << index[i] + 1 << " ";
    }
};

int main()
{
    Compare c1;
    c1.getData();
    c1.display();
    c1.AverageSum();
    c1.minMax();
    c1.search();
    getch();
    return 0;
}