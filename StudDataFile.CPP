

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
  {
    ofstream fout("student.dat");
    int rno;
    char na[20],ch;
    float per;
    do
      {
	cout<<"\nenter the roll number, name & percentage\n";
	cin>>rno>>na>>per;
	fout<<rno<<na<<per;
	cout<<"\nany more records? (y/n)\n";
	ch=getche();
      }while(ch=='y');
    fout.close();
    ifstream frd("student.dat");
    while(!frd.eof())
      {
	frd>>rno>>na>>per;
	cout<<rno<<na<<per;
      }
    frd.close();
    getch();
    return 0;
  }
