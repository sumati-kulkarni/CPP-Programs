/*difference in case of functions*/
/*call by pointer & call by reference*/

#include<conio.h>
#include<iostream.h>

void swapp(int *,int *,int *);
void swap(int &,int &,int &);

int main()
  {
    int a,b,c;
    a=10;
    b=20;
    cout<<"\nbefore swapping\n";
    cout<<"\na="<<a<<"\tb="<<b;
    swapp(&a,&b,&c);
    cout<<"\nswapped values after call by pointer\n";
    cout<<"\na="<<a<<"\tb="<<b;
    swap(a,b,c);
    cout<<"\nswapped values after call by referense\n";
    cout<<"\na="<<a<<"\tb="<<b;
    getch();
    return 0;
  }
void swapp(int *x,int *y,int *z)
  {
    *z=*x;
    *x=*y;
    *y=*z;
  }
void swap(int &x,int &y,int &z)
  {
    z=x;
    x=y;
    y=z;
  }
