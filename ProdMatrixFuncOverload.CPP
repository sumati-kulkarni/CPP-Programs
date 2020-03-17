/* program to multiply two matrices using an operator overloaded functions */

#include<conio.h>
#include<iostream.h>

class matrix
  {
    int a[10][10],r,c;
    public:
      matrix();
      matrix(int,int);
      int operator ==(matrix &);
      matrix operator *(matrix &);
      friend istream & operator >>(istream &,matrix &);
      friend ostream & operator <<(ostream &,matrix &);
  };
matrix::matrix()
  {
    r=c=3;
  }
matrix::matrix(int tr,int tc)
  {
    r=tr;
    c=tc;
  }
int matrix::operator ==(matrix &t2)
  {
    if(c==t2.r)
      {
	return 1;
      }
    else
      {
	return 0;
      }
  }
matrix matrix::operator *(matrix &t2)
  {
    matrix t(r,t2.c);
    for(int i=0;i<r;i++)
      {
	for(int j=0;j<c;j++)
	  {
	    t.a[i][j]=0;
	    for(int k=0;k<c;k++)
	      {
		t.a[i][j]=t.a[i][j]+(a[i][j]*t2.a[j][k]);
	      }
	  }
      }
    return t;
  }
ostream & operator <<(ostream &out,matrix &t)
  {
    for(int i=0;i<t.r;i++)
      {
	for(int j=0;j<t.c;j++)
	  {
	    out<<t.a[i][j]<<"  ";
	  }
	cout<<"\n";
      }
    return out;
  }
istream & operator >>(istream &in,matrix &t)
  {
    int i,j;
    for(i=0;i<t.r;i++)
      {
	for(j=0;j<t.c;j++)
	  {
	    in>>t.a[i][j];
	  }
      }
    return in;
  }
void main()
  {
    matrix m1(2,3);
    matrix m2(3,2);
    matrix m3;
    clrscr();
    cout<<"\nenter the elements of matrix A of order 2 X 3\n";
    cin>>m1;
    cout<<"\nenter the elements of matrix B of order 3 X 2\n";
    cin>>m2;
    if(m1==m2)
      {
	m3=m1*m2;
	cout<<"\n\nproduct of two matrices is :\n\n";
	cout<<m3;
      }
    else
      {
	cout<<"\ninvalid order of matrix to multiply\n";
      }
    getch();
  }