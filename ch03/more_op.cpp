//more_op.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i,a,sum;
  // i=1,sum=0,a=2�u����@��,i++,a+=2�C���j��ҧ���
  for (i=1,sum=0,a=2; i<=5; i++,a+=2)		//�̧ǧ��ܦU�ܼƤ���
  sum += a;	
  cout << "i=" << i << ",a=" << a << ",sum=" << sum << endl;	//��X
  getch();
}  
