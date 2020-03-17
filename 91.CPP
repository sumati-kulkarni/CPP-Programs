/*  to implement array as template arguments  */

#include<iostream.h>
#include<conio.h>

template<class T>
double sum(T x[],int size)
  {
    double s;
    for(int i=0;i<size;i++)
      s=s+x[i];
    return s;
  }
int main()
  {
    int a[50],n,s;
    cout<<"\nenter the value of n\n";
    cin>>n;
    cout<<"\nenter "<<n<<" elements\n";
    for(int i=0;i<n;i++)
      cin>>a[i];
    s=sum(a,n);
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nsum = "<<s;
    getch();
    return 0;
  }
