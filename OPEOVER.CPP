#include<iostream.h>
#include<conio.h>
class binary
{
 private: int a,b;
 public: void get();
	 binary operator +(binary &b);
	 void show();

};

 void binary::get()
 {
 cout<<"Enter a= ";
 cin>>a;
 cout<<"Enter b= ";
 cin>>b;
 }
 binary binary::operator +(binary &B)
 {
 binary B3;
 B3.a=a+B.a;
 B3.b=b+B.b;
 return (B3);
 }
 void binary::show()
 {
 cout<<"*********************************"<<endl;
 cout<<"addition of B1 & B2  is."<<endl;
 cout<<"value of a= "<<a<<endl;
 cout<<"value of b= "<<b<<endl;
 cout<<"**********************************";
 }

 void main()
 {
 clrscr();
 binary B1,B2,Bsum;
 B1.get();
 B2.get();
 Bsum=B1+B2;
 Bsum.show();
 getch();
 }