//ecvt.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
   char *string;
   double value;
   int dec, sign;
   int ndig = 6;
   value = 9.876;
   string = ecvt(value, ndig, &dec, &sign);
   cout<<string<<"=整數 "<<dec<<" 位 正負:"<<sign<<endl;
   value = -123.45;
   ndig= 10;
   string = ecvt(value,ndig,&dec,&sign);
   cout<<string<<"=整數 "<<dec<<" 位 正負:"<<sign <<endl;
   value = 0.6789e5; /* scientific notation */
   ndig = 5;
   string = ecvt(value,ndig,&dec,&sign);
   cout<<string<<"=整數 "<<dec<<" 位 正負:"<<sign <<endl;
   getch();
}