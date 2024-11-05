#include <iostream>
using namespace std;

int main()
{
    int a[10] = {12, 9, 3, 6, 2, 56, 34, 75, 200, 35};
    for (int i = 0; i < 10; i++)
    {
        char fin = (a[i] > a[i + 1]) ? 1 : 2;
        switch (fin)
        {
        case 1:
            int temp;
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
            break;

        case 2:
            if ((a[i] < a[i + 1]) || (a[i] == a[i + 1]))
            {
                continue;
            }
            break;
        }
    }
    cout << "Largest Number is : " << a[9];
    return 0;
}
