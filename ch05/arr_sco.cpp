//arr_sco.cpp            //�ɦW
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE = 5;		//�Q�α`�Ƴ]�w�}�C�j�p
void main()
{ int score[SIZE],i,total=0;
  float ave;
  for (i=0;i<SIZE;i++)
  { cout <<"score["<<i<<"]=";
    cin >> score[i];
    total += score[i];	//�D�M total = total + score[i];
  }
  ave = float(total)/SIZE;	//�D������total�@���O�ഫ
  for (i=0;i<SIZE;i++)
  cout<<score[i]<<" ";
  cout <<"\ntotal="<<total<<"\nave="<<ave;
  getch();
}