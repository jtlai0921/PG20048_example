//ptr_2array.cpp
#include <iostream.h>
#include <conio.h>
#include <except.h>  	//xalloc
#include <stdlib.h>		//randomize(),random;
const int ROW=3;        //�C��
const int COLUMN=4;		//���

void get_array(float **);
void display(float **);
void de_allocate(float **);

void main()
{ float **data ;
  try									//�ҥ~�B�z
  { data = new float *[ROW];	//�t�m�C
    for (int j=0;j<ROW;j++)
    data[j] = new float [COLUMN];	//�t�m��
  }
  catch (xalloc)
  { cout <<"�O���餣��!";
    exit(-1);
  }
  get_array(data);				//���o���
  display(data);					//��ܸ��
  de_allocate(data);				//����O����
  getch();
}

void get_array(float **data)
{ randomize();						//�Ұʶüƨ�Ʋ��;�
  for (int i=0;i<ROW;i++)
  for (int j=0;j<COLUMN;j++)
  data[i][j] = random(10);		//����0-9���ü�
}

void display(float **data)
{ for (int i=0;i<ROW;i++)
  { for (int j=0;j<COLUMN;j++)
    cout << data[i][j]<<" ";
    cout <<"\n";
  }
}

void de_allocate(float **data)
{ for (int i=0;i<ROW;i++)
  delete [] data[i];				//�����

  delete [] data;					//����C
}
