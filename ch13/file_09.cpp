//file_09.cpp
#include <fstream.h>
#include <math.h>	//sin()
const float PI=3.14159;
void main()
{ float d;
  ofstream outfile("fdata.txt");
  outfile << "deg sin(deg)\n";
  for (int i=0;i<=90;i=i+5)
  { d = sin(PI/180*i);
    outfile << i << " " << d <<"\n";
  }
}    