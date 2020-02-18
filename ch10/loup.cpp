//loup.cpp
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
  char ch;
  cout << "輸入任一字元:";
  cin >> ch;
  if (islower(ch))
  cout << char(toupper(ch))<<endl;
  if (isupper(ch))
  cout << char(tolower(ch))<<endl;
  getch();
}
