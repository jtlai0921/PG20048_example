//year.cpp
#include <iostream.h>	//cout
#include <stdlib.h>		//random()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const int Y=3;				//�T�~
const int T=2;				//�G�Ǵ�
const int C=3;				//��^�ƤT��
void main()
{ int year[Y][T][C]={{{89,78,76},{87,90,88}},	//�]�w���
					      {{84,93,67},{98,86,82}},
                     {{80,85,81},{95,84,91}}};
  int ave[C]={0};			//��ȳ]��0
  int i,j,k;
/*
  for (i=0;i<Y;i++)		//�~
  for (j=0;j<T;j++)		//�Ǵ�
  for (k=0;k<C;k++)		//�U�즨�Z
  {
  year[i][j][k]=random(40)+60;		//���Z����60-99���üƭ�
  cout << year[i][j][k] << ' ';
  }
  cout << endl;
 */
  cout <<"      ���   �^��   �ƾ�\n";
  cout <<"      1  2   1  2   1  2\n";	//�U�Ǵ����Z
  for (i=0;i<Y;i++)        				//�T�~0-2
  { cout << (i+1) << " �~";
    { for (j=0;j<C;j++)						//�U��0-2
      { cout << " ";							//�U�춡��
        for (k=0;k<T;k++)       			//�U�Ǵ�0-1
        { cout << setw(3) << year[i][k][j];
          ave[j] += year[i][k][j];	  //�U��T�~�`��
        }
      }
      cout << endl;
    }
  }
  cout <<"����";
  for (j=0;j<C;j++)
  cout << setw(7) << ave[j]/6;		  //�D�����æC�L
  cout << endl;
  getch();
}