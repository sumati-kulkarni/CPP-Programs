

#include<iostream.h>
#include<conio.h>

class fig
  {
    protected:
      int d1,d2;
    public:
      virtual void read()
	{
	  cout<<"\nenter the two dimensions\n";
	  cin>>d1>>d2;
	}
      virtual void disp()
	{
	  cout<<"\n\n\nOUTPUT\n";
	  cout<<"\ndimension 1 : "<<d1;
	  cout<<"\ndimension 2 : "<<d2;
	}
      virtual void area()=0;
  };
class rect:public fig
  {
    private:
      float a;
    public:
      void area()
	{
	  a=d1*d2;
	  cout<<"\n\narea of rectangle = "<<a;
	}
  };
class tri:public fig
  {
    private:
      float a;
    public:
      void area()
	{
	  a=(0.5)*d1*d2;
	  cout<<"\n\narea of triangle = "<<a;
	}
  };
void main()
  {
    fig *x[2];
    int ch;
    clrscr();
    for(int i=0;i<2;i++)
      {
	cout<<"\n\n\n\n1 -> area of triangle\n";
	cout<<"2 -> area of rectangle\n";
	cout<<"\nenter your choice\n";
	cin>>ch;
	if(ch==1)
	  {
	    x[i]=new tri;
	  }
	else
	  {
	    x[i]=new rect;
	  }
	x[i]->read();
      }
    for(i=0;i<2;i++)
      {
	x[i]->disp();
	x[i]->area();
      }
    getch();
  }
