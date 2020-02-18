//str_2a.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char s[4][6]={"Black","White","Red","Green"};
  cout <<"s[4][6]所佔空間="<<sizeof(s)<<" bytes.\n";
  char *x[4]={"Black","White","Red","Green"};
  int size=4;			//4個'\0'
  for (int i=0;i<4;i++)
  size += strlen(x[i]);	//求各列字串長度和
  cout <<"*x[4]所佔空間="<<size<<" bytes.\n";
  getch();
}