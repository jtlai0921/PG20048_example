//if-if0.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ char ch;
   do
   {
     cout << "��J���N�r��:"; cin >> ch;
     if ((ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
     																//�u:�Ʀr�Φr��
     { if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))	//�u:�j�p�g
       { cout << ch << " ���r���r��\n";
         if (ch>='A'&&ch<='Z')			//�P�_�j�g
         cout << ch << " ���j�g�r��";	//�u
         else
         cout << ch << " ���p�g�r��";	//��
       }
       else cout << ch << " ���Ʀr�r��";				//��:�Ʀr
       cout << " ,���X��" << int (ch) << endl; 		//�Nch�ର���
     }
     else cout << ch << " ���S��r��\n";				//��:�S��r��
     cout << "�A��J��?(y/n)";
     cin >> ch;
   }while (ch!='n');
}
