#include<iostream.h>
#include<conio.h>
class base
 {
  public:
	 virtual void show(); //declaring virtual function with "virtual" keyword
 };

void base::show()
    {
     cout<<"Base Class Show Function Called"<<endl;

    }

class derived:public base //Derived "derived" class From "base" class.
 {
  public: void show();

 };

void derived::show()
     {
     cout<<"Derived Class Show Functiom Called"<<endl;
     }


void main()
{

clrscr();
base *ptr; //declaration of base class pointer

base b; //base class object

ptr=&b; //storing object adress in pointer variable

ptr->show(); //calling virtual function through pointer

derived d; //declaration of derived class object

ptr=&d; //storing derived class object address in pointer

ptr->show();  //calling show function through pointer

getch();
}
