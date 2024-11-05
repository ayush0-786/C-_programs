// Wap to convert the decimal value to binary value

#include <iostream>
using namespace std;

int main()
{
    int n = 2, d;
    while (n>0)
    {
        cout<<n%2;
        n=n/2;
    }
    return 0;
}
