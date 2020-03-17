

#include<iostream.h>
#include<conio.h>

class fig
  {
    protected:
      int d1,d2;
    public:
      void read()
	{
	  cout<<"\nenter the two dimensions\n";
	  cin>>d1>>d2;
	}
      void disp()
	{
	  cout<<"\n\n\nOUTPUT\n";
	  cout<<"\ndimension 1 : "<<d1;
	  cout<<"\ndimension 2 : "<<d2;
	}
  };
class rect:public fig
  {
    private:
      float a;
    public:
      void area()
	{
	  a=d1*d2;
	}
      void disp()
	{
	  fig::disp();
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
	}
      void disp()
	{
	  fig::disp();
	  cout<<"\n\narea of triangle = "<<a;
	}
  };
int main()
  {
    tri *x[2];
    rect *y[2];
    int ch;
    for(int i=0;i<2;i++)
      {
	cout<<"\n\n\n\n1 -> area of triangle\n";
	cout<<"2 -> area of rectangle\n";
	cout<<"\nenter your choice\n";
	cin>>ch;
	if(ch==1)
	  {
	    x[i]=new tri;
	    x[i]->read();
	    x[i]->area();
	    x[i]->disp();
	  }
	else
	  {
	    y[i]=new rect;
	    y[i]->read();
	    y[i]->area();
	    y[i]->disp();
	  }
      }
    getch();
    return 0;
  }
