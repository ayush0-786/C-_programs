// Wrp to find wether a given year is leap year or not 

#include<iostream>
using namespace std;

int main()
{
    int y;
    cout<<"Enter a year : ";
    cin>>y;
    if(y % 4 == 0){
        cout<<"This year is a leap year.";
    }
    else{
        cout<<"This year is not a leap year.";
    }
    return 0;
}