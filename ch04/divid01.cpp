//divid01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h> 		//getch()
void main(void)
{ long divisor, dividen;
  char ch;
  do
  { cout << "��J����:"; cin >> divisor;
    cout << "��J�Q����:";cin >> dividen;
    if (divisor==0)
    { cout << "���Ƥ��o��0!\n";
      continue;					//�^��j��do���}�l
    }
    cout << "\n��  ��:"<< dividen /divisor;
    cout << "\n�l�Ƭ�:" << dividen % divisor;
    cout << "\n�~���?(y/n)";
    cin >> ch;
  } while (ch!='n');
  getch();
}
