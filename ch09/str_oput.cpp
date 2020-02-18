//str_oput.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ unsigned int i=0;
  char *string="President of R.O.C.";

  while (string[i]!='\0')
  cout.put(string[i++]);
  char ch='\n';
  cout.put(ch);			//´«¦C
  cout<<"next line\n";
  getch();
}