//guess.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>	//randomize(),random
void main()
{ int number,guess,count=0;
  randomize();				//�Ұʶüƨ�Ʋ��;�
  number = random(100);	//����0-99�����ü�
  do { count++;
       cout << count <<"=";
       cin >> guess;
       if (guess > number) cout << "�Ӥj\n";
       if (guess < number) cout << "�Ӥp\n";
     }
  while (guess != number);
  cout << "�A�q�F"<<count<<"��\n";
  if (count<=5) cout << "�A���o��\n";
  else
  if (count>=15) cout <<"���V�|\n";

  getch();
}