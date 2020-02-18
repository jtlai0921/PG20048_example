//clock.cpp
#include <time.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{  clock_t start, end;
   start = clock();
   for (int i=0;i<1000000;i++);	//ªÅ¶]
   end = clock();
   cout<<"The time was:"<< (end - start) << " ticks";
   cout << endl;
   cout << "CLK_TCK="<<CLK_TCK; //=1000
	getch();
}
