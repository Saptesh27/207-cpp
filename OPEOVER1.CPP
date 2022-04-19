#include<iostream.h>
#include<conio.h>
class unary
{
private: int a,b,c;
public: void get();
	void operator -();
	void show();

};
void unary::get()
{
cout<<"Enter a= ";
cin>>a;
cout<<"Enter b= ";
cin>>b;
cout<<"Enter c= ";
cin>>c;
}
void unary::operator -()
{
a=-a;
b=-b;
c=-c;
}
void unary::show()
{
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
cout<<"c= "<<c<<endl;
}
void main()
{
clrscr();
unary u;
u.get();
-u;
cout<<"**********************************"<<endl;
u.show();
getch();
}
