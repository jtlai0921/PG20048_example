//allo_ptr03.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()

void main()
{ char *s,size;

  size = 30;
  s = new char(size+1);
  cout <<"��JRAM���^����W:";
  cin >> s;
  cout << "RAM�� " <<s<<" ���Y�g\n";

  delete s;
  getch();
}