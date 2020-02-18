//8721.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>
#include <string.h>
char *merge(char *,char *);
void main()
{ char *A="Kinmen",*B="Wang",*C=new char[80];
  C=merge(A,B);
  cout << "A+B="<<C;
  delete[] C;
  getch();
}
// merge
char *merge(char *A, char *B)
{ return strcat(A,B); }
