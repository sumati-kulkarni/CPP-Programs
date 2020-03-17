/* binary operator overloading implemented as a non-member function */

#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read();
      void disp();
      friend complex operator +(complex,complex);
      friend complex add(complex,complex);
  };
void complex::read()
  {
    cout<<"\nenter two complex numbers\n";
    cin>>r>>i;
  }
void complex::disp()
  {
    cout<<"\n\nOUTPUT";
    cout<<"\nsum = "<<r<<"+i"<<i;
  }
complex operator +(complex t1,complex t2)
  {
    complex t;
    t.r=t1.r+t2.r;
    t.i=t1.i+t2.i;
    return t;
  }
complex add(complex t1,complex t2)
  {
    complex t;
    t.r=t1.r+t2.r;
    t.i=t1.i+t2.i;
    return t;
  }
int main()
  {
    complex x,y,z;
    x.read();
    y.read();
    cout<<"\nusing z=x+y";
    z=x+y;
    z.disp();
    cout<<"\n\n\nusing z=add(x,y)";
    z=add(x,y);
    z.disp();
    getch();
    return 0;
  }
