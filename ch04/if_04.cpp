//if_04.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int number,max=0;		//�w�̤j����Ȭ�0
  do
  { cout << "��J���N��(0:����)=";
    cin >> number;
    if (number > max)
      max = number;		//��@�ԭz
  } while (number!=0);
  cout << "�̤j�Ȭ�" << max << endl;
  getch();
}
