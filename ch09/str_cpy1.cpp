//str_cpy1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *source="America apologize!",*destination;
  int len;
  len = strlen(source)+1;			//���o�r����ץ[1
  destination = new char[len];	//�t�m�O����
  strcpy(destination,source);		//�����r��
  cout << "��strcpy()����������r�ꬰ:"
		 << destination << endl;
  strcpy(destination,"");			//�M���r��
  cout << "��strcpy()�M���r���:"
		 << destination << endl;
  stpcpy(destination,source);		//�����r��
  cout << "��stpcpy()����������r�ꬰ:"
		 << destination << endl;
  stpcpy(destination,"");			//�M���r��
  cout << "��stpcpy()�M���r���:"
		 << destination << endl;
  strncpy(destination,source,7);	//���������r��
  destination[7]='\0';				//�[�W����
  cout << "��strncpy()����������r�ꬰ:"
		 << destination << endl;
  destination[0]='\0';
  cout << "��\\0�M���r���:"
		 << destination << endl;
  cout<<(destination+1);
  delete[] destination;
  getch();
}