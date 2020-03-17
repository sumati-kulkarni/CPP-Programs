/*sum of 2 numbers*/

#include<conio.h>
#include<iostream.h>

int main()
  {
    int *p,*q,*r;
    p=new int;
    q=new int;
    r=new int;
    *p=10;
    *q=20;
    *r=*p+*q;
    cout<<"sum = "<<*p<<"+"<<*q<<" = "<<*r;
    delete p;
    delete q;
    delete r;
    getch();
    return 0;
  }
