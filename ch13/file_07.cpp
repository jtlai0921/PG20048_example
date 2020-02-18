//file_07.cpp
#include <fstream.h>
void main()
{ ofstream outfile("strdata.txt");
  outfile << "Use your vote.\n";
  outfile << "Use it wisely.\n";
  outfile << "Use it to make a better future for Scotland.\n";
  outfile << "I'll be with you on that.\n";
}