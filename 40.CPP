/* to display employee record implimenting class */

#include<conio.h>
#include<iostream.h>

class emp
  {
    private:
      int eno;
      char na[20];
    public:
      void read()
	{
	  cout<<"\nenter employee number & name\n";
	  cin>>eno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nemployee number = "<<eno<<"\n\nname = "<<na;
	}
  };

int main()
  {
    emp x;
    x.read();
    x.disp();
    getch();
    return 0;
  }
