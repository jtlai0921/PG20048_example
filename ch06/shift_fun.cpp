#include <iostream.h>   //cout
#include <conio.h>      //getch()
int shift(int,int,char);
void main()
{ int a,b;
  cout << "��Ja="; cin >> a;
  cout << "��J����q(1-4):"; cin >> b;
  cout << "�������G:" << shift(a,b,'L') << endl;
  cout << "�k�����G:" << shift(a,b,'R') << endl;
  cout << "�L���k�����G:" << shift(a,b,'0') << endl;
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