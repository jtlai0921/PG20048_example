//file_02.cpp
#include <fstream.h>	//included iostream.h
#include <conio.h>
void main()
{ int data;
  ifstream infile("data.txt");
  for (int i=0;i<10;i++)
  { infile >>data;		//ÅªÀÉ
    cout << data <<" ";
  }
  getch();	//pause
}
