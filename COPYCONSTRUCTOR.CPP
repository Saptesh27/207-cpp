#include<iostream.h>
#include<conio.h>
class student{
int roll,marks;

public:
      student(int a, int b)//parametrize constructor
      {
       roll=a;
       marks=b;
      }
      student(student &object);
      void show_data();


};

student::student(student &object)   //copy constructor initilization
		{
		 roll=object.roll;  //initilize through given object
		 marks=object.marks;
		}
void student::show_data()
	      {
	       cout<<"roll no = "<<roll<<endl;
	       cout<<"marks   = "<<marks<<endl;
	      }
void main()
{
clrscr();
cout<<"parametrize constructor called"<<endl;
student sd(32,93);
sd.show_data();
cout<<"copy constructor called"<<endl;
student sp=sd; //copy constructor called
sp.show_data();
getch();
}