#include <iostream>
using namespace std;

void Volume_Of_Cuboid(int l, int b, int h)
{
    int result = l*b*h;
    cout<<"The volume of cuboid is : "<<result;
}

int main()
{
    Volume_Of_Cuboid(5, 2, 3);
    return 0;
}
