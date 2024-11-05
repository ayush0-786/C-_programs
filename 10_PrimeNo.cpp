// Wrp to classify a given number as prime or composite

#include <iostream>
using namespace std;

int main()
{
    int n, a = 1;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "It is not a prime number.";
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                a++;
            }
        }
        if (a == 2)
        {
            cout << "It is a prime number.";
        }
        else
        {
            cout << "It is a composite number.";
        }
    }
    return 0;
}
