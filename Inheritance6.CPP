

#include<iostream.h>
#include<conio.h>

class b
  {
    public:
      virtual void disp()
	{
	  cout<<"\nbase class\n";
	}
  };
class d:public b
  {
    public:
      void disp()
	{
	  cout<<"\nderived class";
	}
  };
void main()
  {
    clrscr();
    int ch;
    b *p;
    cout<<"\n1 -> p=new b\n2 -> p=new d\n\nenter your choice\n";
    cin>>ch;
    if(ch==1)
      {
	cout<<"\nb *p";
	cout<<"\n\nin case of p=new b";
	p=new b;
	cout<<"\n\nbase class pointer to base class member function\n";
      }
    else
      {
	cout<<"\nb *p";
	cout<<"\n\nin case of p=new d";
	p=new d;
	cout<<"\n\nbase class pointer to derived class member function\n";
      }
    p->disp();
    getch();
  }
