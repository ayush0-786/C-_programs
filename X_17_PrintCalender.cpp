#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sd, ld;
    cout << "Enter the starting day of calender : ";
    cin >> sd;
    cout << "Enter the last day of calender : ";
    cin >> ld;
    if (ld <= 31)
    {
        cout << "Sun\tMon\tThu\tWed\tThu\tFri\tSat" << endl;
        for (int i = 1; i < sd; i++)
        {
            cout << "\t";
        }
        for (int i = 1; i <= ld; i++)
        {
            if (i % 7 == 0)
            {
                cout << i << "\t" << endl;
            }
            else
            {
                cout << i << "\t";
            }
        }
    }
    else
    {
        cout << "\t\tInvalid input";
    }
    return 0;
}