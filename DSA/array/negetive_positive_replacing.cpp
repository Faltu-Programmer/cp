#include <iostream>
using namespace std;
void swap_ (int& a, int& b)
{
	int tem = a;
	a = b;
	b = tem;
}

void neg_pos_replace (int a[], int n)
{
	int i=0, j=n-1;
	
	while (i < j)
	{
		while (a[i] < 0) i++;
		while (a[j] >= 0) j--;
		
		if(i < j)
			swap_ (a[i],a[j]);
	}
	
}
// the output not sorted , -ve are in head of the
// list and +ve are on tail of the list....


int main ()
{
	int n = 8;
	int a[8] = {1,3,-6,-8,10,-13,23,-9};
	neg_pos_replace(a,n);

	for(int x : a)
		cout << x << " ";
	
	return 0;	
}
