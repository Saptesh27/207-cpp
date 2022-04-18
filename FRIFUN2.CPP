//Program to demonstrate a friend function can be friend of one or more classes
//In this program addfunction is friend of class A and class B
//add function accesing the private data of both A and B classes
#include<iostream.h>
#include<conio.h>
class B;
class A
{
int a;
public: void setA()
       {
       cout<<"Enter Value of a= ";
       cin>>a;
       }
       friend void add(A,B); //declration add friend function as friend of class A
};

class B
{
int b;
public:void setB()
	 {
	 cout<<"Enter value of b= ";
	 cin>>b;
	 }
	 friend void add(A,B); //declaration add friend function as friend of class B
};
 void add(A o1, B o2) //reciving object a1 b1 as o1 o2
 {
 cout<<"sum is= "<<o1.a+o2.b;
 }

void main()
{
 clrscr();
 A a1;
 B b1;
 a1.setA();
 b1.setB();
 add(a1,b1);//passing object through friend function
 getch();

}