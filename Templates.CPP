/*  program using templates  */

#include<iostream.h>
#include<conio.h>

template<class T>
T sum(T x,T y)
  {
    T z;
    z=x+y;
    return z;
  }

int main()
  {
    int a,b,c, x, y, z;
    cout<<"\nenter the values of a & b\n";
    cin>>a>>b;
    cout<<"\nenter the values of x & y\n";
    cin>>x>>y;
    c=sum(a,b);
    z=sum(x,y);
    cout<<"\n\nsum = "<<a<<" + "<<b<<" = "<<c;
    cout<<"\n\nsum = "<<x<<" + "<<y<<" = "<<z;
    getch();
    return 0;
  }
