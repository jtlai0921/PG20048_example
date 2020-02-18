//file_b02.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int i,n;
  ofstream outfile("bdata.dat",ios::binary);
  for (i=0;i<100;i++)
  outfile.write((char*)&i,sizeof(int));
  outfile.close();
  ifstream infile("bdata.dat",ios::binary);
  for (i=0;i<100;i++)
  { infile.read((char*)&n,sizeof(int));
    cout << n <<" ";
  }
  getch();
}