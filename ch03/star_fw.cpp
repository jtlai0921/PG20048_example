//star_fw.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i,j;
  for (i=1;i<=5;i++)	//�~��
  { j=1;
    while (j<=8)		//����
    { cout << '*';
      j++;
    }
    cout << endl;		//���C
  }
  getch();
}  