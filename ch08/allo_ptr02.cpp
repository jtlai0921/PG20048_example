//allo_ptr02.cpp			���а}�C
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()

void main()
{ int *a,size,i;
  cout <<"��J�}�C�j�p:";
  cin >> size;
  a = new int(size);			//���t�O����
  for (i=0;i<size;i++)
  { cout <<i<<":"<< (a++) <<"=";	//��X��}
    cin >> *(a++);			//��J���
  }
  delete a;						//����O����
  getch();
}