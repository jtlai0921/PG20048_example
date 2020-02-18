//file_10.cpp
#include <fstream.h>
#include <conio.h>
#include <iomanip.h>	//setw()
void main()
{ float d;
  int degree;
  char buffer[80];
  ifstream infile("fdata.txt");
  infile.getline(buffer,80);
  cout << buffer << endl;
  while (infile)
  { infile >> degree >> d;
    cout << setw(3)<< degree << "  " <<d << endl;
  }
  getch();
}    
