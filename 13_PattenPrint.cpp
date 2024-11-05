//Wap to print the following patten
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int y = n; y >= i; y--) // Print space reverse mode 
        {
            cout << " ";
        }

        for (int k = 1; k < i; k++) //State Printing
        {
            cout << k;
        }

        for (int j = i; j >= 1; j--) //Reverse Printing
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
