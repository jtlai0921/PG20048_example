//nine_9.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i,j;
  for (i=1;i<=9;i++)		//�~��
  {
    for (j=1;j<=9;j++)	//����
    cout << i << 'x' << j << '=' << i*j << endl;
    cout << endl;			//�C�@������槹��Ť@�C
  }
  getch();
}