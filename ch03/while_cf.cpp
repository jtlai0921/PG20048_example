//while_CF.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ double c=20,f;
  cout << "  C     F\n";
  cout.setf(ios::showpoint);	//��ܤp���I
  cout.setf(ios::fixed,ios::floatfield);	//���M�p�����A�]�w�I�p��
  cout.precision(1);		//�@��p��
  while (c<=25.0)
  { f = 9.0/5.0*c + 32.0;		//�����ؤ󤽦�
    cout.width(5); cout << c;	//�]��e�ÿ�X
    cout.width(6); cout << f << endl;
    c++;								//���ܱ��󤧱ԭz
  }
  getch();
}