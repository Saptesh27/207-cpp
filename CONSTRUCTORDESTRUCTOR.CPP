//program to demonstrate constructor and destructor
#include<iostream.h>
#include<conio.h>
class demo
{
  public:
	 demo();
	~demo();

};
void demo::demo()
	    {
	    cout<<"constructor is called"<<endl;
	    }
void demo::~demo()
	    {
	     cout<<"destructor is called"<<endl;
	    }
void main()
 {

 demo d;
 getch();

 }
