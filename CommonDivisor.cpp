//Project Euler 1. Soru (Multiples of 3 and 5) 3 ve 5'in (1000'e kadar) tüm ortak bölenlerinin toplamını bulan program.

#include<iostream> 

using namespace std;
int main()
{ 
	int i;
	unsigned long sum;
	
	for(i=3;i<1000;i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
		   sum += i;
		}
		
	}
	 cout<< "\nToplam : "<< sum;
	
	return 0;
}
