//str_array.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ unsigned int i;
  char str[]="Sun Moon Lake";
  char *string="Great Wall";
  cout<<"以字元陣列輸出字串:\n";
  cout <<"str[]=";
  for (i=0;i<strlen(str);i++)	//strlen()為求字串長度
  cout << str[i];
  cout << endl;
  cout <<"*string=";
  i=0;
  while (string[i]!='\0')
  cout << string[i++];
  cout << endl;
  getch();
}