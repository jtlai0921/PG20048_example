//allo_ptr03.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()

void main()
{ char *s,size;

  size = 30;
  s = new char(size+1);
  cout <<"輸入RAM之英文全名:";
  cin >> s;
  cout << "RAM為 " <<s<<" 之縮寫\n";

  delete s;
  getch();
}