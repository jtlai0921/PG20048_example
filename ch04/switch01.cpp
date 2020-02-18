//switch01.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short a,b；
  char op；
  cout << "輸入a,b="； cin >> a >> b；
  do
  { cout << "運算(+,-,*,/):"； cin >> op；
    switch (op)
    { case '+':cout << a << '+' << b << '=' << (a+b)；
            break；
     case '-':cout << a << '-' << b << '=' << (a-b)；
            break；
     case '*':cout << a << '*' << b << '=' << (a*b)；
            break；
     case '/':if (b!=0) 		//分母b不能為0
            cout << a << '/' << b << '=' << (a/b)；
            else if (a!=0)		//分母a不能為0
            cout << b << '/' << a << '=' << (b/a)；
            break；
     default :cout << "錯誤! " << op << " 非運算符號!"；
    }
    cout << endl；
    cout << "再運算嗎(y/n)?"； cin >> op；
  } while (op!='n')；
}
