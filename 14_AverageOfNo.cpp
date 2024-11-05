//Wap using for loop calculate the average of first n nutral number

#include <iostream>
using namespace std;

int main()
{
    int a = 4, sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << (float)sum/a;
    return 0;
}
