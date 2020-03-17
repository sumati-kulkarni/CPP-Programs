/*structures*/

#include<conio.h>
#include<iostream.h>

int main()
  {
    struct student
      {
	int rno;
	char na[15];
	float per;
      };
    struct student x;
    cout<<"\nenter roll number, name & percentage of a student\n";
    cin>>x.rno>>x.na>>x.per;
    cout<<"\nentered values are:\n";
    cout<<"\nroll number = "<<x.rno<<"\nname = "<<x.na<<"\npercentage = "<<x.per;
    getch();
    return 0;
  }
