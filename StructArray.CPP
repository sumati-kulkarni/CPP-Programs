/*array of structures*/

#include<conio.h>
#include<iostream.h>

struct emp
  {
    int eno;
    char na[20];
  };

void main()
  {
    struct emp x[10];
    clrscr();
    cout<<"enter 10 employee records consisting of employee number & name\n";
    for(int i=0;i<10;i++)
      {
	cin>>x[i].eno>>x[i].na;
      }
    cout<<"\n\neno\tna\n";
    for(i=0;i<10;i++)
      {
	cout<<"\n"<<x[i].eno<<"\t"<<x[i].na;
      }
    getch();
  }