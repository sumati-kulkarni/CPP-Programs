/*  to sort array elements using template arguments  */

#include<iostream.h>
#include<conio.h>


void read(int [],int);
void disp(int [],int);
void sort(int [],int);
void swap(int &,int &);

template<class T>
void read(T x[],int size)
  {
    cout<<"\nenter "<<size<<" values\n";
    for(int i=0;i<size;i++)
      {
	cin>>x[i];
      }
  }

template<class T>
void disp(T x[],int size)
  {
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nsorted values are\n";
    for(int i=0;i<size;i++)
      {
	cout<<"\n"<<x[i];
      }
  }

template<class T>
void sort(T x[],int size)
  {
    T tmp;
    for(int i=0;i<size-1;i++)
      {
	for(int j=i+1;j<size;j++)
	  {
	    if(x[i]>x[j])
	      {
		swap(x[i],x[j]);
	      }
	  }
      }
  }

template<class T>
void swap(T &x,T &y)
  {
    T tmp;
    tmp=x;
    x=y;
    y=tmp;
  }

void main()
  {
    int a[50],n;
    clrscr();
    cout<<"\nenter the value of n\n";
    cin>>n;
    read(a,n);
    sort(a,n);
    disp(a,n);
    getch();
  }
