#include<iostream>
using namespace std;
class A
{
public:
int x;
private:
//int y;
protected:
//int z;
};
int main()
{
A obj;
obj.x=10;
//obj.y=20;
//obj.z=30;
cout<<"The value of x is ->"<< obj.x;
//cout<<"The value of y is "<<obj.y;
//cout<<"The value of z is "<<obj.z;
return 0;
}


#include<iostream>
using namespace std;
class student 
{
public:
string name;
void printname()
{
cout<<"Name is="<<name;
}
};
int main()
{
student x;
x.name="Rashid";
x.printname();
}

#include<iostream>
using namespace std;
class student
{
private:
string name;
int age;
public:
void getdata()
{
cout<<"Enter name and age";
cin>>name>>age;
}
void printdata()
{
cout<< "Name is-->"<<name<<endl;
cout<<"Age is-->"<<age<<endl;
}
};
int main()
{
student s;
s.getdata();
s.printdata();
}
