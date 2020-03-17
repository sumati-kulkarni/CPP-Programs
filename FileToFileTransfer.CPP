

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
  {
    char fna[20],dfna[20];
    char ch;
    cout<<"\nenter source filename\n";
    cin>>fna;
    ifstream fin(fna);
    cout<<"\nenter destination file name\n";
    cin>>dfna;
    ofstream fout(dfna);
    cout<<"\nenter file contents\n";
    while(!fin.eof())
      {
	fin>>ch;
	fout<<ch;
      }
    fin.close();
    fout.close();
    getch();
    return 0;
  }
