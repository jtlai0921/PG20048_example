//if_02.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ float a,b,x;
  cout << "��Ja,b=";
  cin >> a >> b;
  if (a!=0)
  { x=-b/a;				//�h�ԭz
    cout <<"x�Ӭ� " << x << endl;
  }
  if (a==0)
  cout << "�藍�_,a�Ȥ��ର0\n";
  getch();
}
