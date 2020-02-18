//ch_null.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char ch[5]={'a','b'};		//設定ch[0]為'a',ch[1]為'b'
  for (int i=0;i<5;i++)
  if (ch[i]!='\0')  cout << ch[i];	//非空字元時列印該元素
  else cout << 'X';		 	//空字元時列印'X'
  cout << endl;
  getch();					  //暫停
}
