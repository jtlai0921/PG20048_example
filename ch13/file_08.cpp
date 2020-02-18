//file_08.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ const MAX = 80;
  char buffer[MAX];
  ifstream infile("strdata.txt");
  while (!infile.eof())
  { infile.getline(buffer,MAX);
    cout << buffer << endl;
  }
  getch();
}