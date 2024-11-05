#include <iostream>
using namespace std;

void Area_Circle(int r){
    float result = 3.14*(r*r);
    cout<<"Area of circle is : "<<result; 
}

int main()
{
    int r;
    cout<<"Enter the radius of circle :";
    cin>>r;
    Area_Circle(r);
    return 0;
}
