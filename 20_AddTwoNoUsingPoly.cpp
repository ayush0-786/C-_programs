#include <iostream>
using namespace std;

float AddTwoNumber(int a, int b)
{
    cout << "It's a integer number : " << a + b << endl;
}

void AddTwoNumber(double c,  double d)
{
    cout << "It's a float number : " << c + d;
}

int main()
{
    AddTwoNumber(12, 34);
    AddTwoNumber(22.1, 43.3);
    return 0;
}
