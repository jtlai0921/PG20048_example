//str_write.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ char *string;;

  string = new char[21];
  cout << "����^��W��:";
  cin.getline(string,21); 	//�i��J�t�ťդ��r��
  string[3]='\0';
  cout << string<<endl; 	//��X�J��'\0'�N����
  cout.write(string,21);	//���]'\0'�Ӱ���
  cout << endl;
  getch();
}