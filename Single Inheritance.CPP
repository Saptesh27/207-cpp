#include<iostream.h>
#include<conio.h>
class student
{
 int rollno;
 char name[20];
 public:
	void getimfo();
	void showimfo();
};
 void student::getimfo()
   {
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Name: ";
    cin>>name;

   }
 void student::showimfo()
  {
   cout<<"************Output**********"<<endl;
   cout<<"Name is: "<<name<<endl;
   cout<<"Roll no is: "<<rollno<<endl;
  }
class mark:public student
{
 int m1,m2,m3;
 public:
	 void getdata();
	 void showdata();
};
 void mark::getdata()
  {
   cout<<"Enter Mark of sub 1: ";
   cin>>m1;
   cout<<"Enter Mark of sub 2: ";
   cin>>m2;
   cout<<"Enter Mark of sub 3: ";
   cin>>m3;
  }

 void mark::showdata()
  {
  cout<<"***********Marks Are*************"<<endl;
  cout<<"Marks of sub 1 are: "<<m1<<endl;
  cout<<"Marks of sub 2 are: "<<m2<<endl;
  cout<<"Marks of sub 3 are: "<<m3<<endl;
  }
  void main()
  {
  clrscr();
  mark s1;
  s1.getimfo();
  s1.getdata();
  s1.showimfo();
  s1.showdata();

  getch();
  }