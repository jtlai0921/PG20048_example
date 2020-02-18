//fun_ovr04.cpp
#include <iostream.h>
#include <conio.h>
void line();		//固定字元與長度
void line(int);	//固定字元與可變長度
void line(int,char);	//可變字元與可變長度
void main()
{ int n;
  char ch;
  cout << "線長及字元n,ch=";
  cin >> n >> ch;
  line();
  line(n);
  line(n,ch);
  getch();
}
void line()
{ for (int i=0;i<10;i++)
  cout << '-';
  cout << endl;
}
void line(int n)
{ for (int i=0;i<n;i++)
  cout << '-';
  cout << endl;
}
void line(int n,char ch)
{ for (int i=0;i<n;i++)
  cout << ch;
  cout << endl;
}
