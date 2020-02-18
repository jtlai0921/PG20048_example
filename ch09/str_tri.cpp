//str_tri.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *triangle,*R="Republic";
  int len;
  len = strlen(R)+1;
  triangle = new char[len+1];
  for (int i=i;i<len;i++)
  { triangle[0]='\0';		//²M°£¦r¦ê
    strncat(triangle,R,i);
    cout<< triangle << endl;
  }
  delete[] triangle;
  getch();
}