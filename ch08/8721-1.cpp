//8721-1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>
#include <string.h>
void merge(char*,char*,char*);
void main()
{ char *A="Kinmen",*B="Wang",*C;
  C=new char[30];
  merge(A,B,C);
  cout << "A+B="<< C;
  delete[] C;
  getch();
}
// merge
void merge(char *A,char *B,char *C)
{ C=strcpy(C,strcat(A,B));}

