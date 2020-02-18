//str_cpy.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *source="America apologize!",*destination;
  int len,i;
  len = strlen(source)+1;			//取得字串長度加1
  destination = new char[len];	//配置記憶體
  for (i=0;i<len;i++)
  destination[i] = source[i];		//陣列方式拷貝
  cout << "拷貝後字串為:"
		 << destination << endl;
  delete[] destination;
  getch();
}