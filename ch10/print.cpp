//print.cpp
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
  int c,count=0;
  for (c=0;c<255;c++)
  if (isprint(c))
  count++;
  cout << "�@�@ "<<count <<"��";
  getch();
}
