/*  program to swap 2 values using templates  */

#include<iostream.h>
#include<conio.h>

template<class T>
void swap(T &x,T &y)
  {
    T tmp;
    tmp=x;
    x=y;
    y=tmp;
  }

void main()
  {
    char m,n;
    int a,b;
    float x,y;
    clrscr();
    cout<<"\nenter the integer values of a & b\n";
    cin>>a>>b;
    cout<<"\nenter the floating values of x & y\n";
    cin>>x>>y;
    cout<<"\nenter the characters of m & n\n";
    cin>>m>>n;
    cout<<"\n\nOUTPUT\n\n";
    cout<<"before swapping\n\n";
    cout<<"\na = "<<a<<"\t\tb = "<<b;
    cout<<"\n\nx = "<<x<<"\t\ty = "<<y;
    cout<<"\n\nm = "<<m<<"\t\tn = "<<n;
    swap(a,b);
    swap(x,y);
    swap(m,n);
    cout<<"\n\nafter swapping\n\n";
    cout<<"\na = "<<a<<"\t\tb = "<<b;
    cout<<"\n\nx = "<<x<<"\t\ty = "<<y;
    cout<<"\n\nm = "<<m<<"\t\tn = "<<n;
    getch();
  }