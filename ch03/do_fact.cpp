//do_fact.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int fact = 1;			//������
  short n,i=1;				//i�������ܼ�
  cout << "��J�@�����(<=10):";
  cin >> n;					//���o��J��
  do
    fact = fact * i++;	//�b�ԭz�����ܱ���
  while (i<=n);
  cout << n << "!=" << fact << endl;
  getch();
}  