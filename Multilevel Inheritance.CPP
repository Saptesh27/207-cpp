#include<iostream.h>
#include<conio.h>
class student
{
 int rollno;
 char name[20];

 public:void get_imfo();
	void put_imfo();

};

class mark:public student
{
  protected: int m1,m2;
 public:  void get_mark();
	 void put_mark();
};

class result:public mark
{

 public:void display();

};

void student::get_imfo()
{
cout<<"Enter Roll no -";
cin>>rollno;
cout<<"Enter Name - ";
cin>>name;
}
void student::put_imfo()
{
cout<<"Roll no is - "<<rollno<<endl;
cout<<"Name is - "<<name<<endl;
}
void mark::get_mark()
{
cout<<"Enter mark of sub 1 - ";
cin>>m1;
cout<<"Enter mark of sub 2 - ";
cin>>m2;
}
void mark::put_mark()
{
cout<<"Mark of sub 1 - "<<m1<<endl;
cout<<"Mark of sub 2 - "<<m2<<endl;
}
void result::display()
{

get_imfo();
get_mark();
cout<<"**************Output***************"<<endl;
put_imfo();
put_mark();
int total;
total=m1+m2;
cout<<"Sum is - "<<total;
}
void main()
{
clrscr();
result r;
r.display();
getch();
}
