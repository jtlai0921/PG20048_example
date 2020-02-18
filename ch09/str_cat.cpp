//str_cat.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *destination;
  char *R="Republic",*O=" Of ",*C="China";
  destination = new char[strlen(R)+strlen(O)+strlen(C)+1];
  strcpy(destination, R);
  strcat(destination, O);
  strcat(destination, C);
  cout<<destination;
  delete[] destination;
  getch();
}