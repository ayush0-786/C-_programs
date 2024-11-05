//Wrp to enter any character if the entered character is in lower case convert it into upper case. if it is a lower case character then convert it into upper case.

#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter any charator from A-Z : ";
    cin>>a;
    if(a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'){
        cout<<"Upper case is : "<<(char)toupper(a);
    }
    else if(a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='O'||a=='P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='U'||a=='V'||a=='W'||a=='X'||a=='Y'){
        cout<<"Lower case is : "<<(char)tolower(a);
    }
}