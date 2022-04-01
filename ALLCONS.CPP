#include<iostream.h>
#include<conio.h>
class demo
 {
  private:int x;
  public:
  demo()
   {
    cout<<"Default Consturctor"<<endl;
   }
  demo(int a)
   {
   x=a;
   cout<<"Constructor With One Parameter "<<a<<endl;
   }
  demo(int a, int b)
   {
   cout<<"Constructor With Two Parameters "<<a<<"\t"<<b<<endl;
   cout<<"a+b= "<<a+b<<endl;
   }
  demo(demo &d)
   {
   cout<<"copy constrctor "<<endl;
   x=d.x;
   cout<<"copied value= "<<x;
   }
 };

 void main()
 {
 clrscr();
 demo d1;//default constructor

 demo d2(10);//parametrize constructor with one parameter

 demo d3(20,30);//parameterize constructor with two parameter

 demo d4=d2;//copy constructor

 getch();

 }



































































































































































