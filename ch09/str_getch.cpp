//str_getch.cpp
#include <iostream.h>	//cin,cout
void main()
{ char *string,ch;
  int i=0;
  string = new char[21];
  cout << "��J�p��20�r�����r��:";
  do
  { ch = (char)cin.get();
    if (ch!='\n')
    string[i++] = ch;
  }while (ch!='\n' || i>=20);
  string[i]='\0';
  cout << "��J���r�ꬰ:"<<string;
  cout << endl;
  delete [] string;
  cin.get();
}