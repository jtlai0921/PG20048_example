//file_r01.cpp
#include <fstream.h>
#include <conio.h>
void main()
{ int n;
  char ch;
  fstream file;
  file.open("random.dat",ios::app|ios::in|ios::out|ios::binary);
  do
  { cout << "Enter a number:"; cin >> n;
    file.write((char*)&n,sizeof(n));	//�g�J�ɧ�
    cout << "Enter another(Y/N)?"; cin >> ch;
  } while ((ch=='y')||(ch=='Y'));

  file.seekg(0);		//�]�w�����Y
  file.read((char*)&n,sizeof(n));
  while (!file.eof())	//EOF�N����
  { cout << n << ",";
    file.read((char*)&n,sizeof(n));	//Ū�����
  }
  cout << endl;
  getch();
}