//field07.cpp    			�]�w��ǰO��
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ double sec;
  int secl;
  cout.setf(ios::scientific,ios::floatfield);	//�]�w��ǯB��
  secl = 365 * 24 * 60 * 60;	//�@�~���
  sec = secl;						//�ରdouble
  cout << sec << endl;			//��X��ǲŸ� 3.153600e+07
  cout.setf(ios::hex,ios::basefield);	//��X16�i��
  cout.setf(ios::showbase);				//��X��0X
  cout.setf(ios::uppercase);				//�H�j�g��X
  cout << secl << endl;                //0X1E13880
  cout.setf(ios::oct,ios::basefield);	//��X8�i��,��0�}�Y
  cout << secl << endl;						//0170231600					
  getch();	//�Ȱ�
}
