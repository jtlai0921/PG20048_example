//ptr_2arr.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>		//random()
const int N=4,M=3;
void main()
{ int a[N][M],i,j,*ptr;
  ptr = &a[0][0];		//�]�w�Ĥ@������}�������ܼ�
  for (i=0;i<N*M;i++)
   *(ptr+i)=random(101);	//���Ͷüƭ�0-100
   cout <<"�}�C��Ʀp�U:\n";
   for (i=0;i<N;i++)
   { for (j=0;j<M;j++)
     { cout.width(3);	//�]�w���e��
       cout << *(*(a+i)+j) << " ";
     }
     cout << "\n";
   }
   getch();
}
