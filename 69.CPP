/* program to implement destructors */

#include<iostream.h>
#include<conio.h>

class num
  {
    private:
      int *a;
      int size,s;
    public:
      num();
      num(int);
      num(num &);
      void read();
      void disp();
      void sum();
      ~num()
	{
	  delete [] a;
	}
  };
num::num()
  {
    size=5;
    a=new int[5];
    s=0;
    cout<<"\n\ndefault constructor:\n";
    cout<<"\nsize="<<size;
    cout<<"\nsum="<<s;
  }

num::num(int t)
  {
    size=t;
    a=new int[size];
    s=0;
    cout<<"\n\nparameterized constructor:\n";
    cout<<"\nsize="<<size;
    cout<<"\nsum="<<s;
  }

num::num(num &t)
  {
    size=t.size;
    s=t.s;
    a=new int[size];
    for(int i=0;i<size;i++)
      {
	a[i]=t.a[i];
      }
    cout<<"\n\ncopy constructor:\n";
    cout<<"\nsize="<<size;
    cout<<"\nsum="<<s;
  }

void num::read()
  {
    cout<<"\nto read keyboard elements\n";
    cout<<"\nenter the elements of an array\n";
    for(int i=0;i<size;i++)
      {
	cin>>a[i];
      }
  }

void num::sum()
  {
    s=0;
    for(int i=0;i<size;i++)
      {
	s=s+a[i];
      }
  }

void num::disp()
  {
    cout<<"\nentered data\n";
    for(int i=0;i<size;i++)
      {
	cout<<"\n"<<a[i];
      }
    cout<<"\n\nsum="<<s;
  }

void main()
  {
    clrscr();
    num x;
    num y(5);
    num z=y;
    x.read();
    x.sum();
    x.disp();
    getch();
  }