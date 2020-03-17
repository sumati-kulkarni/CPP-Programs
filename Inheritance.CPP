

#include<iostream.h>
#include<conio.h>

class stud
  {
    int usn;
    char na[20];
    protected:
      int age;
    public:
      virtual void read()
	{
	  cout<<"\nenter university roll number, name & age of a student\n";
	  cin>>usn>>na>>age;
	}
      virtual void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nuniversity roll number : "<<usn;
	  cout<<"\nname : "<<na;
	  cout<<"\nage : "<<age;
	}
  };


class ugstud:public stud
  {
    int sem,fees;
    static int avgage[8][2];
    public:
      void read()
	{
	  stud::read();
	  cout<<"\nenter semester & fees of a graduation\n";
	  cin>>sem>>fees;
	  avgage[sem-1][0]+=age;
	  avgage[sem-1][1]++;
	}
      void disp()
	{
	  stud::disp();
	  cout<<"\nsemester : "<<sem;
	  cout<<"\nfees : "<<fees;
	}
      static void dispavgage();
  };
int ugstud::avgage[8][2];
void ugstud::dispavgage()
  {
    float aage;
    cout<<"\nsem\tavgage\n";
    for(int i=0;i<=7;i++)
      {
	if(avgage[i][1]!=0)
	  {
	    aage=avgage[i][0]/avgage[i][1];
	  }
	else
	  {
	    aage=0;
	  }
	cout<<"\n"<<i+1<<"\t"<<aage;
      }
  }

class pgstud:public stud
  {
    int sem,fees;
    static int avgage[8][2];
    public:
      void read()
	{
	  stud::read();
	  cout<<"\nenter semester & fees of a graduation\n";
	  cin>>sem>>fees;
	  avgage[sem-1][0]+=age;
	  avgage[sem-1][1]++;
	}
      void disp()
	{
	  stud::disp();
	  cout<<"\nsemester : "<<sem;
	  cout<<"\nfees : "<<fees;
	}
      static void dispavgage();
  };
  
 int pgstud::avgage[8][2];

void pgstud::dispavgage()
  {
    float aage;
    cout<<"\nsem\tavgage\n";
    for(int i=0;i<=7;i++)
      {
	if(avgage[i][1]!=0)
	  {
	    aage=avgage[i][0]/avgage[i][1];
	  }
	else
	  {
	    aage=0;
	  }
	cout<<"\n"<<i+1<<"\t"<<aage;
      }
  }
int main()
  {
    stud *p[10];
    int i,ch;
    for(i=0;i<=9;i++)
      {
	cout<<"\n1 -> ugstudent\n";
	cout<<"\n2 -> pgstudent\n";
	cin>>ch;
	if(ch==1)
	  {
	    p[i]=new ugstud;
	  }
	else
	  {
	    p[i]=new pgstud;
	  }
	p[i]->read();
      }
    for(i=0;i<=9;i++)
      {
	p[i]->disp();
      }
    ugstud::dispavgage();
    pgstud::dispavgage();
    getch();
    return 0;
  }
