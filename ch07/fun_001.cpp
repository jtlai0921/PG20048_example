//fun_01.cpp				�I�s��ư���Y�u�@�����Ǧ^��
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void list_line();			//prototype ��ƫŧi
void main()
{ for (int i=0;i<5;i++)
  list_line();			//�I�s���
  getch();				//�Ȱ�
}
//��Ʃw�q
void list_line()
{ for (int i=0;i<5;i++)
  cout << '-';			//��X�r��'-'
  cout << endl;
}