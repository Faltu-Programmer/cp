#include <iostream>
#include "search.cpp"
void sub_a_from_b (int* a, int al, int*b, int bl)
{
	int len = (al > bl ? al : bl);
	
	int r[len], cnt=0;
	for(int i=0;i<al;i++)
	{
		if(!search(b, bl, a[i]))
		{
			r[cnt++]=a[i];
		}
	}
	
	for(int i=0;i<cnt;i++)
	{
		std :: cout << r[i] << " ";
	}
}
