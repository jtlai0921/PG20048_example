//file_01.cpp
#include <fstream.h>	//included iostream.h
#include <conio.h>
void main()
{ ofstream outfile("data.txt");
  for (int i=0;i<10;i++)
  outfile <<i<<" ";		//�g�J�ɮ�
  cout << "OK! Press a key.";
  getch();	//pause
}
