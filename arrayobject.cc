//program to demostrate array of object
#include<iostream.h>
#include<conio.h>
class student
  {
  private: int rollno;
	   char name[20];
	   int age;

  public: void getimfo();
	  void putimfo();

  };

  void student::getimfo()
		{
		 cout<<"Enter Roll No:- ";
		 cin>>rollno;
		 cout<<"Eneter Name :- ";
		 cin>>name;
		 cout<<"Enter Age:- ";
		 cin>>age;

		}
 void student::putimfo()
	       {
		cout<<rollno<<"\t \t "<<name<<"\t"<<age<<"\t"<<endl;

	       }


 void main()
      {

	student s[5];
	clrscr();
	int i;
	for(i=0;i<5;i++)
	   {
	    s[i].getimfo();
	    cout<<endl;

	   }
 cout<<"Roll no \t Name \t\tAge \t"<<endl;
	for(i=0;i<5;i++)
	   {

	    s[i].putimfo();
	    cout<<endl;

	   }
   getch();
}