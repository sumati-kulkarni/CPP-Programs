/*structures*/

#include<conio.h>
#include<iostream.h>

int main()
  {
    struct student
      {
	int rno,m1,m2;
	char na[15];
	float total;
      };
    struct student x;
    cout<<"\nenter roll number, name & 2 subject marks of a student\n";
    cin>>x.rno>>x.na>>x.m1>>x.m2;
    x.total=x.m1+x.m2;
    cout<<"\n\nroll number = "<<x.rno<<"\nname = "<<x.na<<"\ntotal = "<<x.total;
    getch();
    return 0;
  }
