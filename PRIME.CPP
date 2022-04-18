//program to chek no prime or not
#include<iostream.h>
#include<conio.h>
class test
 {
  public: int chek(int x)
		  {
		   int i,p=0;

		    for(i=2;i<x;i++)
			{
			 if(x%i==0)
			 p=1;
			 break;
			}
		    return p;
		  }
 };

 void main()
  {
  clrscr();
   int x,p;
   cout<<"Enter a num:- ";
   cin>>x;

   test obj;
   p=obj.chek(x);
   if(p==0)
    {
     cout<<"Number is prime";
    }
   else{
    cout<<"number is not prime";
   }
   getch();
  }