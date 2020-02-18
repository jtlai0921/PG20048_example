//str_getch.cpp
#include <iostream.h>	//cin,cout
void main()
{ char *string,ch;
  int i=0;
  string = new char[21];
  cout << "輸入小於20字元之字串:";
  do
  { ch = (char)cin.get();
    if (ch!='\n')
    string[i++] = ch;
  }while (ch!='\n' || i>=20);
  string[i]='\0';
  cout << "輸入之字串為:"<<string;
  cout << endl;
  delete [] string;
  cin.get();
}