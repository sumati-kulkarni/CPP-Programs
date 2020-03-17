/* to print the whole class using cout implementing return by reference */


#include<conio.h>
#include<iostream.h>

class emp
  {
    int eno;
    char na[20];
    public:
      void read()
	{
	  cout<<"\nenter the employee number & name\n";
	  cin>>eno>>na;
	}
      friend ostream & operator <<(ostream &,emp &);
  };
ostream & operator <<(ostream &out,emp &t)
  {
    out<<"\nemployee number = "<<t.eno<<"\nname = "<<t.na;
    return out;
  }
void main()
  {
    emp x,y;
    clrscr();
    x.read();
    y.read();
    cout<<x<<y;
    getch();
  }