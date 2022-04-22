#include<iostream.h>
#include<conio.h>
class demo
{
public:int a,b;
 void read()
 {
 a=10;
 b=20;
 }
};
class demo1
{
public:
int x,y;
void read_a()
 {
 x=20;
 y=30;
 }
};
class demo3:public demo,public demo1
{
public:
int c;
void display()
{
c=a+b;
cout<<"addition:-"<<c<<endl;
c=x*y;
cout<<"multi:-"<<c;
}
};
 void main()
 {
 clrscr();
 demo3 d1;
 d1.read();
 d1.read_a();
 d1.display();
 getch();
 }