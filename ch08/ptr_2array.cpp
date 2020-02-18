//ptr_2array.cpp
#include <iostream.h>
#include <conio.h>
#include <except.h>  	//xalloc
#include <stdlib.h>		//randomize(),random;
const int ROW=3;        //列數
const int COLUMN=4;		//行數

void get_array(float **);
void display(float **);
void de_allocate(float **);

void main()
{ float **data ;
  try									//例外處理
  { data = new float *[ROW];	//配置列
    for (int j=0;j<ROW;j++)
    data[j] = new float [COLUMN];	//配置行
  }
  catch (xalloc)
  { cout <<"記憶體不足!";
    exit(-1);
  }
  get_array(data);				//取得資廖
  display(data);					//顯示資料
  de_allocate(data);				//釋放記憶體
  getch();
}

void get_array(float **data)
{ randomize();						//啟動亂數函數產生器
  for (int i=0;i<ROW;i++)
  for (int j=0;j<COLUMN;j++)
  data[i][j] = random(10);		//產生0-9之亂數
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
  delete [] data[i];				//釋放行

  delete [] data;					//釋放列
}
