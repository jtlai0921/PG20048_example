//do_max.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <limits.h>		//for INT_MAX,INT_MIN
void main()
{ int max=INT_MIN,	//�]���̤p��
      min=INT_MAX,	//�]���̤j��
      sum=0,n,count=1;
  do
    {
      cout << "��J��" << count << "��="; cin >> n;
      max = (n > max) ? n : max;	//�D�̤j��
      min = (n < min) ? n : min;	//�D�̤p��
      sum += n;						//�D�M
    } while (++count<=10);       //���ܱ���ԭz���æb���󦡤�
  cout << "Sum=" << sum <<" ,Max=" << max;
  cout << " ,Min=" << min << endl;
  getch();
}
