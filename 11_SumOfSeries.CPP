// Wap to sum the series : 1/1+2^2/2+3^3/3.....

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, num;
    float sum;
    cout << "Enter range of number : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        num = pow(i, i) / i;
        sum = num + sum;
    }
    cout << sum;
    return 0;
}
