//str_cpy.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *source="America apologize!",*destination;
  int len,i;
  len = strlen(source)+1;			//���o�r����ץ[1
  destination = new char[len];	//�t�m�O����
  for (i=0;i<len;i++)
  destination[i] = source[i];		//�}�C�覡����
  cout << "������r�ꬰ:"
		 << destination << endl;
  delete[] destination;
  getch();
}