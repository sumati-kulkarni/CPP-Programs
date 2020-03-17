/*  to find sum of two numbers using multiple function overloading  */

#include<iostream.h>
#include<conio.h>
#include<string.h>

template<class T1,class T2>
double sum(T1 x,T2 y)
  {
    double z;
    z=x+y;
    return z;
  }

template<class T1,class T2,class T3>
double sum(T1 x,T2 y,T3 z)
  {
    double a;
    a=x+y+z;
    return a;
  }

char *sum(char s1[],char s2[])
  {
    char *s3=new char[strlen(s1)+strlen(s2)+1];
    strcpy(s3,s1);
    strcat(s3,s2);
    return s3;
  }

void main()
  {
    clrscr();
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nfor sum(1,1.1) = "<<sum(1,1.1);
    cout<<"\n\nfor sum(1,1) = "<<sum(1,1);
    cout<<"\n\nfor sum(10,20,30) = "<<sum(10,20,30);
    cout<<"\n\nfor sum('ABC','XYZ') = "<<sum("ABC","XYZ");
    getch();
  }
