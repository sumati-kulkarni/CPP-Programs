/*natural numbers from 1 to N*/

#include<conio.h>
#include<iostream.h>

void main()
  {
    int n;
    clrscr();
    cout<<"enter the value of n\n";
    cin>>n;
    cout<<"entered natural numbers are:\n";
    for(int i=1;i<=n;i++)
      {
	cout<<"\n"<<i;
      }
    getch();
  }