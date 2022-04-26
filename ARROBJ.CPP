#include<iostream.h>
#include<conio.h>
class stud{

int rollno;
char name[20];
public: void get();
	void put();


};

void stud::get()
{
 cout<<"Enter Roll No:- ";
 cin>>rollno;
 cout<<"Enter Name:- ";
 cin>>name;
}
void stud::put()
{
 cout<<"Roll no:- "<<rollno<<endl;
 cout<<"Name:- "<<name<<endl;

 }

 void main()
 {
  stud s[3];
  clrscr();
  int i;
  for(i=0;i<3;i++)
  {
   s[i].get();
  }
  for(i=0;i<3;i++)
  {
  s[i].put();
  }
  getch();
  }





































































































































































