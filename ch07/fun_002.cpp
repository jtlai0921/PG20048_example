//fun_02.cpp				�I�s��ư���Y�u�@���Ǧ^��
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int get_data();			//prototype ��ƫŧi
void main()
{ int max=0;
  for (int i=0;i<5;i++)	//i,t���ܼƥu�bfor�j�餺����
  { int t=get_data();   //�I�s��ƶǦ^�@��ƭ�
    max=(t > max) ? t : max;
  }
  cout << "\n�̤j�Ȭ�:"<< max <<endl;
  getch();					//�Ȱ�
}
//��Ʃw�q
int get_data()
{ int data;
  cout << "��J���N���: ";
  cin >> data;
  return data;
}