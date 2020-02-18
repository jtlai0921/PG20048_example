//file_03.cpp
#include <fstream.h>
void main()
{ char ch='A';
  int i=9;
  double d=10.11;
  char str1[]="Kinmen";
  char str2[]="Wang";
  ofstream outfile("mix.txt");
  outfile << ch << i <<' ' << d << str1 <<' '<< str2;
}
