//_loup.cpp
#include <string.h>
#include <iostream.h>
#include <ctype.h>
#include <conio.h>
void main(void)
{
  int length, i;
  char *string = "THIS IS A STRING.";
  cout <<"轉為小寫:";
  length = strlen(string);
  for (i = 0; i < length; i++)
  {
    if ((string[i] >= 'A') && (string[i] <= 'Z'))
     string[i] = char(_tolower(string[i]));
  }
  cout<< string<<'\n';
  cout <<"再轉為大寫:";
   for (i = 0; i < length; i++)
  {
    if ((string[i] >= 'a') && (string[i] <= 'z'))
     string[i] = char(_toupper(string[i]));
  }
  cout<< string;
  getch();
}
