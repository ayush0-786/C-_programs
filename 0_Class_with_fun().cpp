#include <iostream>
using namespace std;

class student{
  private:
  char name[50];
  int age;

  public:
  void getdata();
  void display();
};

void student :: getdata(){
  cout<<"enter the name of student "<<endl;
  cin>>name;
  cout<<"enter the age of student "<<endl;
  cin>>age;
}

void student :: display(){
  cout<<"name of the student is :"<<name<<endl;
  cout<<"age of the student is :"<<age<<endl;
}

int main(){
  student obj;
  obj.getdata();
  obj.display();
  return 0;
}