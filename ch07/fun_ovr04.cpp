//fun_ovr04.cpp
#include <iostream.h>
#include <conio.h>
void line();		//�T�w�r���P����
void line(int);	//�T�w�r���P�i�ܪ���
void line(int,char);	//�i�ܦr���P�i�ܪ���
void main()
{ int n;
  char ch;
  cout << "�u���Φr��n,ch=";
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
