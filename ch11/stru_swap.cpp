//stru_swap.cpp         ���c�}�C�Ƨ�
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()

struct rec
{ int chi,eng,math,total;
  float ave;
};

void output_data(rec *,char*);

void main()
{ rec a={80,80,80},b={90,90,90},t;	//a,b�]�w���
  a.total = a.chi + a.eng + a.math;	//�p���`��
  a.ave = a.total /3.0;					//�p�⥭��
  b.total = b.chi + b.eng + b.math;
  b.ave = b.total /3.0;
  cout <<"�����e:\n";
  output_data(&a,"a");					//��X
  output_data(&b,"b");
  //����
  t = a;
  a = b;
  b = t;
  cout <<"������:\n";
  output_data(&a,"a");
  output_data(&b,"b");

  getch();
}	//end of main()

//output_data
void output_data(rec *a,char *s)
{ cout << s << "=";
  cout << a->chi;
  cout << " " << a->eng;
  cout << " " << a->math;
  cout << " " << a->total;
  cout << " " << a->ave<<"\n";
}

