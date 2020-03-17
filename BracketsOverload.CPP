/* program to overload brackets [] & ()  */

#include<conio.h>
#include<iostream.h>

class num
  {
    int a[5];
    public:
      void read();
      void disp();
      int operator [](int index)
	{
	  return a[index];
	}
      int operator ()(int index)
	{
	  return a[index];
	}
  };
void num::read()
  {
    cout<<"\nenter 5 integer values\n";
    for(int i=0;i<5;i++)
      {
	cin>>a[i];
      }
  }
void num::disp()
  {
    cout<<"\nentered values are:\n";
    for(int i=0;i<5;i++)
      cout<<a[i]<<"\n";
  }
int main()
  {
    num x;
    x.read();
    x.disp();
    cout<<"\nprinting directly in main function\n\n";
    cout<<"x[i]\tx(i)\n";
    for(int i=0;i<5;i++)
      {
	cout<<x[i]<<"\t"<<x(i)<<"\n";
      }
    cout<<"\n\nto print just 1 or 2 or more numbers with [] brackets\n";
    cout<<"x[0] = "<<x[0];
    cout<<"\nx[2] = "<<x[2];
    cout<<"\n\nto print just 1 or 2 or more numbers with () brackets\n";
    cout<<"x(0) = "<<x(0);
    cout<<"\nx(3) = "<<x(3);
    getch();
    return 0;
  }
