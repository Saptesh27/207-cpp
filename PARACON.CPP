//program to demonstrate parametrize constructor
#include<iostream.h>
#include<conio.h>
class num
{
 private: int a,b,c;
 public:
	num(int a,int b,int c);
	void show();
};
 void num::num(int m, int n, int o)
	       {
		a=m;
		b=n;
		c=o;
	       }
 void num::show()
	   {
	   cout<<"a= "<<a<<" b= "<<b<<" c= "<<c;
	   }

 void main()
     {
     clrscr();
     num demo(10,11,12);
     demo.show();
     getch();

     }