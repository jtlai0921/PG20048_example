//year.cpp
#include <iostream.h>	//cout
#include <stdlib.h>		//random()
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
const int Y=3;				//三年
const int T=2;				//二學期
const int C=3;				//國英數三科
void main()
{ int year[Y][T][C]={{{89,78,76},{87,90,88}},	//設定初值
					      {{84,93,67},{98,86,82}},
                     {{80,85,81},{95,84,91}}};
  int ave[C]={0};			//初值設為0
  int i,j,k;
/*
  for (i=0;i<Y;i++)		//年
  for (j=0;j<T;j++)		//學期
  for (k=0;k<C;k++)		//各科成績
  {
  year[i][j][k]=random(40)+60;		//成績介於60-99之亂數值
  cout << year[i][j][k] << ' ';
  }
  cout << endl;
 */
  cout <<"      國文   英文   數學\n";
  cout <<"      1  2   1  2   1  2\n";	//各學期成績
  for (i=0;i<Y;i++)        				//三年0-2
  { cout << (i+1) << " 年";
    { for (j=0;j<C;j++)						//各科0-2
      { cout << " ";							//各科間隙
        for (k=0;k<T;k++)       			//各學期0-1
        { cout << setw(3) << year[i][k][j];
          ave[j] += year[i][k][j];	  //各科三年總分
        }
      }
      cout << endl;
    }
  }
  cout <<"平均";
  for (j=0;j<C;j++)
  cout << setw(7) << ave[j]/6;		  //求平均並列印
  cout << endl;
  getch();
}