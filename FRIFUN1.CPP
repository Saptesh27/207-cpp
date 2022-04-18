//program to demonstrate friend function
#include<iostream.h>
#include<conio.h>
class Complex{
int a,b;
public:
  void setdata()
       {
	cout<<"Enter Value of a = ";
	cin>>a;
	cout<<"Enter Value of b = ";
	cin>>b;
       }
 void showdata()
      {
      cout<<"a= "<<a<<endl;
      cout<<"b= "<<b<<endl;
      }

 friend void fun(Complex);  //declaration of friend function
};

 void fun(Complex c)  //defination of friend function
      {               //no membership label we use when we writing defination of friend function
       cout<<"sum is= "<<c.a+c.b;   //cannot use friend keyword again in defination of friend function
      }
 int main()
  {
  clrscr();
  Complex c1,c2,c3;
  c1.setdata();
  c1.showdata();
  //no caller object use time of calling friend function
  //passing object in friend function
  fun(c1);
  getch();
  return 0;

  }