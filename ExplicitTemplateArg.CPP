/*  program to implement explicit template argument  */

#include<iostream.h>
#include<conio.h>

template<class T1,class T2>
double sum(T1 x,T2 y)
  {
    double z;
    z=x+y;
    return z;
  }

int main()
  {
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nfor sum(10,2.5) = "<<sum(10,2.5);
    cout<<"\nfor sum(1.1f,1.1f) = "<<sum(1.1f,1.1f);
    cout<<"\nfor sum<float,float>(10,10) = "<<sum<float,float>(10,10);
    cout<<"\nfor sum<unsigned int,unsigned int>(10,10) = "<<sum<double,double>(10,10);
    getch();
    return 0;
  }
