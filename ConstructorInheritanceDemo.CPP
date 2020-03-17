/* to demonstrate constructors in inheritance */

#include<iostream.h>
#include<conio.h>

class B
  {
    int b;
    public:
      B()
       {
	 cout<<"\n\n\nbase class default constructor\n";
	 b=0;
       }
      B(int i)
       {
	 cout<<"\n\n\nbase class parameterized constructor\n";
	 b=i;
       }
  };
class D:public B
  {
    int d;
    public:
      D()
       {
	 cout<<"\nderived class default constructor\n";
	 d=0;
       }
      D(int i)
       {
	 cout<<"\nderived class 1 parameter constructor\n";
	 d=i;
       }
      D(int t1,int t2):B(t1)
       {
	 cout<<"\nderived class 2 parameter constructor\n";
	 d=t2;
       }
  };
int main()
  {
    B x;
    B y(8);
    D p;
    D q(8);
    D r(8,5);
    getch();
    return 0;
  }
