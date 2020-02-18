//str_3a.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void menu();
void main()
{
  menu();
  getch();
}

void menu()
{ char *s[]={"0.End\n","1.Add\n","2.Update\n",
             "3.Delete\n","4.List.\n","Select:"};
  for (int i=0;i<6;i++)
  cout<<s[i];
}