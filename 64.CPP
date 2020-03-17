/*  program to add two matrices & display the resultant matrix  */


#include<conio.h>
#include<iostream.h>

class matrix
  {
    int m[10][10],r,c;
    public:
      void read();
      matrix add(matrix);
      void disp();
  };
void matrix::read()
  {
    cout<<"\nenter row size\n";
    cin>>r;
    cout<<"\nenter column size\n";
    cin>>c;
    cout<<"\nenter the matrix elements of order "<<r<<" X "<<c<<"\n";
    for(int i=0;i<r;i++)
      {
	for(int j=0;j<c;j++)
	  {
	    cin>>m[i][j];
	  }
      }
  }
matrix matrix::add(matrix y)
  {
    matrix tmp;
    if(r==y.r&&c==y.c)
      {
	tmp.r=r;
	tmp.c=c;
	for(int i=0;i<r;i++)
	  {
	    for(int j=0;j<c;j++)
	      {
		tmp.m[i][j]=m[i][j]+y.m[i][j];
	      }
	  }
      }
    else
      {
	tmp.r=0;
	tmp.c=0;
	cout<<"\nmatrix order is not compatible\n";
      }
    return tmp;
  }
void matrix::disp()
  {
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nafter addition\n\n";
    for(int i=0;i<r;i++)
      {
	for(int j=0;j<c;j++)
	  {
	    cout<<m[i][j]<<"\t";
	  }
	cout<<"\n";
      }
  }
void main()
  {
    matrix a,b,c;
    clrscr();
    a.read();
    b.read();
    c=a.add(b);
    c.disp();
    getch();
  }