//program to demonstrate default constuctor
#include<iostream.h>
#include<conio.h>
 class point{
 private:
 int x,y;

 public:
 point(int x1, int y1)
  {
  x=x1;
  y=y1;
  }
  int getx()
  {
  return x;
  }
  int gety()
  {
  return y;
  }

 };
 void main(){

 clrscr();
 //creating object with name p
 point p1(10, 15);

 cout<<"p1.x= "<<p1.getx()<<", p1.y= "<<p1.gety();
 getch();


 }