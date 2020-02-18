//fun_ovr05.cpp
#include <iostream.h>
#include <conio.h>
void line(int=10,char='*');
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
void line(int n,char ch)
{ for (int i=0;i<n;i++)
  cout << ch;
  cout << endl;
}
