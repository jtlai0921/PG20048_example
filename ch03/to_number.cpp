//To_Number.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int i,number,n;
  char ch;
  cout <<"��J5�ӼƦr�r��('0'..'9'):";
  for (i=0,number=0;i<5;i++)
  { cin >> ch;							//Ū���r��
    n = ch - '0';						//�ର�Ʀr'1'=>1
    number = number * 10 + n;		//�ର�ƭ�
  }
  cout <<"���ƭȬ�:"
       << number << endl;
  cout <<"���ƼƭȬ�:"
       << (number*2) << endl;
  getch();
}