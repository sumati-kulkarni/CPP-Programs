/*to find array sum*/

#include<conio.h>
#include<iostream.h>

int main()
  {
    int n,*p;
    cout<<"\nenter the value of n\n";
    cin>>n;
    p=new int[n];
    int sum=0;
    cout<<"\nenter the elements of an array\n";
    for(int i=0;i<n;i++)
      {
	cin>>p[i];
	sum=sum+p[i];
      }
    cout<<"\nsum of "<<n<<" elements = "<<sum;
    delete [] p;
    getch();
    return 0;
  }
