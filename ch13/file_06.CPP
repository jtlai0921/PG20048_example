//file_06.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ char ch;
  ifstream infile("cdata.txt");
  while (infile)
  { infile.get(ch);
    cout << ch;
  }
  getch();
}    