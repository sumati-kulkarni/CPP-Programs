/*sum of array of 10 elements*/

#include<conio.h>
#include<iostream.h>

void main()
  {
    int a[10],s=0;
    clrscr();
    cout<<"\nenter 10 numbers\n";
    for(int i=0;i<10;i++)
      {
	cin>>a[i];
	s=s+a[i];
      }
    cout<<"\n\nsum="<<s;
    getch();
  }