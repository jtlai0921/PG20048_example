//fibonaci.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getc()
#include <limits.h>		//UINT_MAX =4294967295
void main()
{ unsigned int first,second;
  short count=1;
  first=0;         //�Ĥ@�Ƭ�0
  second=1;			 //�ĤG�ƶ}�l��1
  cout << 0 << " ";
  while (first < ULONG_MAX/2)	//�Ĥ@�ƻݤp��̤j�Ȥ��@�b
  { cout << second << " ";
    count++;
    unsigned int third = first + second;	//�ĤT��=�Ĥ@�ƥ[�ĤG��
    first = second;	//�ĤG���ܲĤ@��
    second = third;	//�ĤT���ܲĤG��
  }
  cout <<"\n�@��: " << count << " ��\n";
  getch();
}