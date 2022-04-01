#include<iostream.h>
#include<conio.h>
 //function with one parameter
void print(int a)
  {
   cout<<"Value of a= "<<a;
  }
void print(int a, int b)
   {
    cout<<"a+b= "<<a+b;
   }
void print(char *c)
  {
  cout<<c;
  }
void main()
 {
 clrscr();
 print(10);//function with one parameter
 cout<<endl;
 print(10,20);//function with two parameters
 cout<<endl;
 print("Saptesh"); //function with string
 getch();
 }
