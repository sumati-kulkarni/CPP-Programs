/*default arguments*/

#include<conio.h>
#include<iostream.h>

int sum(int ,int );

int main()
  {
    int a,b,c;
    a=10;
    b=20;
    c=sum(a,b);
    cout<<"\nsum="<<c;
    getch();
    return 0;
  }

int sum(int x=0,int y=0)
  {
   int z;
   z=x+y;
   return z;
  }
