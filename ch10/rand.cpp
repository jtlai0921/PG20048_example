//rand.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
  int i;
  cout << "RAND_MAX=" << RAND_MAX << endl;
  randomize(); 	//�Ұʶüƨ�Ʋ��;�
  cout<"����10�� 0 �� 99���üƦp�U:\n";
  for(i=0; i<10; i++)
    cout<<(rand() % 100)<<' ';	//�D���H100���l��
  getch();
}
