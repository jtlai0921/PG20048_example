//file_b03.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int i,n[100];
  for (i=0;i<100;i++)
  n[i] = i+1;
  ofstream outfile("buffer.dat",ios::binary);
  outfile.write((char*)n,sizeof(int));
  outfile.close();
  ifstream infile("bdata.dat",ios::binary);
  infile.read((char*)n,sizeof(int));
  for (i=0;i<100;i++)
  cout << n[i] <<" ";
  getch();
}