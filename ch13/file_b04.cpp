//file_b04.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int i,*n;
  n = new int[100];
  for (i=0;i<100;i++)
  *(n+i) = i+2;
  ofstream outfile("pointer.dat",ios::binary);
  outfile.write((char*)n,sizeof(int));
  outfile.close();
  ifstream infile("bdata.dat",ios::binary);
  infile.read((char*)n,sizeof(int));
  for (i=0;i<100;i++)
  cout << *(n+i) <<" ";
  delete[] n;
  getch();
}