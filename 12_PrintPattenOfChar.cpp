// Wap to print the following patten
// A
// AB
// ABC
// ABCD
// ABCDE

#include<iostream>
using namespace std;

int main()
{
    char a[5] = {'A','B','C','D','E'};
    string add;
    for (int i = 0; i < 5; i++)
    {
        add=add+a[i];
        cout<<add<<endl;
    }
    return 0;
}
