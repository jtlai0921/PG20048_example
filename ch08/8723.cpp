//8723.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ float *f, ave=0;
  f = new float(10);
  cout << "Enter 10 data:\n";
  for (int i=0;i<10;i++)
  { cin >> *(f+i);
    ave += *(f+i);
  }
  ave /=10.0;
  cout << "\nave=" << ave;
  delete[] f;
  getch();
}  
