//if_05.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a,b,c,max;
  cout << "��Ja,b,c=";
  cin >> a >> b >> c;
  max=a;			   //�Ha��̤j
  if (b > max)		//max�Pb���
    max = b;
  if (c > max)		//max�Pc���
    max = c;
  cout << "�̤j�Ȭ�" << max << endl;
  getch();
}
