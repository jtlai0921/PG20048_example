//stru_sort02.cpp         ���c�}�C�Ƨ�
#include <iostream.h>	//cout,cin
#include <stdlib.h>		//random()
#include <string.h>		//strlen()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()

const short N=10;
const char *title="�y�� ��� �^�� �ƾ� �`�� ����   �W��\n";

struct rec
{ short seat;		//�y��
  int chi,eng,math,total;
  float ave;
  short rank;		//�W��
};

//prototype
void get_data(rec*,int);	//���o���
void list_line(int,char);	//��X���j�u
void list_title(char*);		//��X���D
void output_data(rec*);		//���жǻ�
void swap_rec(rec&, rec&);	//��}�O�W

void main()
{ rec student[10];
  short i,j;
  for (i=0;i<N;i++)
  get_data(&student[i],i);				//�I�s��ƨ��o���

  //�C�L�Ƨǫe���
  list_title("�e):\n"); 				//�C�L���D
  for (i=0;i<N;i++)
  output_data(&student[i]);			//��X�}�C
  list_line(strlen(title)-1,'=');	//��X���u
  cout <<"\n";

  //���`��total�ƧǥѤj��p
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].total < student[j+1].total)
  swap_rec(student[j],student[j+1]);	//�洫���c

  //�g�W��1,2,3,...10 ��rank���
  for (i=0;i<N;i++)
  student[i].rank = i+1;

  //�̮y��seat�ƧǥѤp��j
  for (i=0;i<N-1;i++)
  for (j=0;j<N-i-1;j++)
  if (student[j].seat > student[j+1].seat)
  swap_rec(student[j],student[j+1]);	//�洫���c

  //�C�L�Ƨǫ���
  list_title("��):\n");
  for (i=0;i<N;i++)
  output_data(&student[i]);
  list_line(strlen(title)-1,'=');
  cout <<"\n";

  getch();
}	//end of main()

//get_data
void get_data(rec *a,int i)
{ a->seat=i+1;				//���Ф覡
  a->chi=random(101);	//�üƤ���
  a->eng=random(101);
  a->math=random(101);
  a->total=a->chi+a->eng+a->math;	//�`��
  a->ave=a->total/3.0;	//�D����
  a->rank = 0;				//�W��
 }

//list_line
void list_line(int n,char ch)
{ for (int i=0;i<n;i++)
  cout << ch;				//��X�r��
  cout << endl;
}

//list_title
void list_title(char *str)
{
  cout << "�ǥͪ����Z(�Ƨ�"<<str;
  list_line(strlen(title)-1,'-');
  cout <<title;			//��X�U���W��
  list_line(strlen(title)-1,'=');
}

//output_data
void output_data(rec *a)
{ cout << setw(3) << a->seat;
  cout << setw(5) << a->chi;
  cout << setw(5) << a->eng;
  cout << setw(5) << a->math;
  cout << setw(5) << a->total;
  cout << setw(8) << a->ave;
  cout << setw(5) << a->rank<<"\n";
}

//swap_rec
void swap_rec(rec &a, rec &b)
{ rec t;
  t = a;				//�������c
  a = b;
  b = t;
}