#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter the value of x1, x2, y1, y2 : "<<endl;
    cin>>x1>>x2>>y1>>y2;
    float dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<"Output is : "<<dis;
    return 0;
}
