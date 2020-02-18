//file_b01.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int i,n[1];
  ofstream outfile("bdata.dat",ios::binary);
  for (i=0;i<100;i++)
  { n[0] = i+1;
    outfile.write((char*)n,sizeof(int));
  }
  outfile.close();
  ifstream infile("bdata.dat",ios::binary);
  for (i=0;i<100;i++)
  { infile.read((char*)n,sizeof(int));
    cout << n[0] <<" ";
  }
  getch();
}