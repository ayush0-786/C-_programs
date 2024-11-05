// Wrp a program that display teh size of every data type

#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    cout << "enter integer number : ";
    cin >> a;
    cout << "enter float number : ";
    cin >> b;
    cout << "enter charactor number : ";
    cin >> c;
    cout << "A value datatype size is: " << sizeof(a) << endl;
    cout << "B value datatype size is: " << sizeof(b) << endl;
    cout << "C value datatype size is: " << sizeof(c);
}
