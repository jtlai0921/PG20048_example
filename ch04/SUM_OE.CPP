//sum_oe.cpp
#include <iostream.h>	//cout
#include <conio.h>	//getch()
void main()
{ short number,
	odd_count=0,even_count=0,
	odd_sum=0,even_sum=0;
  cout << "Enter data in integer:";
  do
    { cin >> number;
      if (number % 2 ==0)
      { even_count++;
	even_sum += number;
      }
      else
      { odd_count++;
	odd_sum += number;
      }
    } while (number !=0);
    cout << "items  nums  sum\n";
    cout << "even ";
    cout.width(5); cout << even_count-1;
    cout.width(6); cout << even_sum << endl;
    cout << "odd  ";
    cout.width(5); cout << odd_count;
    cout.width(6); cout << odd_sum << endl;
    getch();
  }