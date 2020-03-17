/* to calculate simple interest implimenting class */

#include<conio.h>
#include<iostream.h>

class SI
  {
    private:
      int p;
      float t,r,si;
      void calc()
	{
	  si=(p*t*r)/100.00;
	}
    public:
      void read()
	{
	  cout<<"\nenter the values of principal, time & rate\n";
	  cin>>p>>t>>r;
	  calc();
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nprincipal="<<p<<"\ntime="<<t<<"\nrate="<<r<<"\nsimple interest="<<si;
	}
  };
int main()
  {
    SI x;
    x.read();
    x.disp();
    getch();
    return 0;
  }
