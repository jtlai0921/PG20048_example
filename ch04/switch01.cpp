//switch01.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short a,b�F
  char op�F
  cout << "��Ja,b="�F cin >> a >> b�F
  do
  { cout << "�B��(+,-,*,/):"�F cin >> op�F
    switch (op)
    { case '+':cout << a << '+' << b << '=' << (a+b)�F
            break�F
     case '-':cout << a << '-' << b << '=' << (a-b)�F
            break�F
     case '*':cout << a << '*' << b << '=' << (a*b)�F
            break�F
     case '/':if (b!=0) 		//����b���ର0
            cout << a << '/' << b << '=' << (a/b)�F
            else if (a!=0)		//����a���ର0
            cout << b << '/' << a << '=' << (b/a)�F
            break�F
     default :cout << "���~! " << op << " �D�B��Ÿ�!"�F
    }
    cout << endl�F
    cout << "�A�B���(y/n)?"�F cin >> op�F
  } while (op!='n')�F
}
