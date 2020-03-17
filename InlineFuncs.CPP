/*inline functions*/

#include<conio.h>
#include<iostream.h>

inline int sum(int,int);

int main()
  {
    int a,b,c;
    cout<<"\nenter any two integer values\n";
    cin>>a>>b;
    c=sum(a,b);
    cout<<"\n\nsum="<<c;
    getch();
    return 0;
  }

inline int sum(int x,int y)
  {
    int z;
    z=x+y;
    return z;
  }
