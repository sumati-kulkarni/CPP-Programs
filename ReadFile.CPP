

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
  {
    char fna[20];
    char ch;
    cout<<"\nenter the filename\n";
    cin>>fna;
    ofstream fout(fna);
    cout<<"\nenter file contents\n";
    while((ch=getche())!='\x1A')
      {
	fout<<ch;
      }
    fout.close();
    ifstream fin(fna);
    cout<<"\nthe file contents are:\n";
    while(!fin.eof())
      {
	fin>>ch;
	cout<<ch;
      }
    fin.close();
    getch();
    return 0;
  }
