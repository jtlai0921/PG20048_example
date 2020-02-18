#include <iostream.h>   //cout
#include <conio.h>      //getch()
int shift(int,int,char);
void main()
{ int a,b;
  cout << "輸入a="; cin >> a;
  cout << "輸入移位量(1-4):"; cin >> b;
  cout << "左移結果:" << shift(a,b,'L') << endl;
  cout << "右移結果:" << shift(a,b,'R') << endl;
  cout << "無左右移結果:" << shift(a,b,'0') << endl;
  getch();
}
//
int shift(int a,int b, char ch)
{ int t;
  switch (ch)
  { case 'L': t = a << b; break;
    case 'R': t = a >> b; break;
    default: t = a;
  }
  return t;
}