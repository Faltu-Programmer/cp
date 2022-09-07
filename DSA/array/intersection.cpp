#include <iostream>
#include "search.cpp"

void intersection (int* a, int al, int* b, int bl)
{
	
	int len = al+bl, cnt=0;
	int t[len];
	
	for(int i=0;i<al;i++)
	{
		if(search(b,bl,a[i]) )
		{
			t[cnt++] = a[i];
		}
	}
	
	for(int i=0;i<cnt;i++)
		std :: cout << t[i] << " ";
}
