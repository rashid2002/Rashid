#include<iostream>
using namespace std;
class student
{
private:
string name;
int age;
int roll_number;
int marks[3];
public:
void getdata()
{
cout<<"Enter name ,age and roll number";
cin>>name>>age>>roll_number;
cout<<"Enter marks";
for(int i=0;i<=2;i++)
{
cin>>marks[i];
}
}
void printdata()
{
cout<< "Name is-->"<<name<<endl;
cout<<"Age is-->"<<age<<endl;
cout<<"roll_number is--->"<<roll_number<<endl;
for(int i=0;i<=2;i++)
{
cout<<marks[i]<<endl;
}
}
};
int main()
{
student s;
s.getdata();
s.printdata();
}
