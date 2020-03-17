/* to print class using cout function */

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
int main()
  {
    emp x,y;
    x.read();
    cout<<x;
    getch();
    return 0;
  }
