#include <iostream>
using namespace std;

int* mergeTwoSortedArray (int a[], int b[],int al,int bl)
{
	int t = al+bl;
	int *p = new int [t];
	int i=0,j=0,k=0;
	
	for(; (i<al and j<bl);)
	{
		if(a[i] < b[j])
		{
			p[k] = a[i];
			i++;
			k++;
		}
		else if(b[j] < a[i])
		{
			p[k] = b[j];
			j++;
			k++;
		}
	}
	for(;i<al and k<t;i++,k++)
		p[k] = a[i];
	
	for(;j<bl and k<t;j++,k++)
		p[k] = b[j];
	
	
	return p;
}


int main ()
{
	int x[7] = {1,3,5,7,9,11,13};
	int y[6] = {2,4,6,8,10,12};
	int n=6,m=7;
	
	int* p = mergeTwoSortedArray(x,y,m,n);
	
	for(int i=0; i< n+m;i++)
		cout << p[i] << " ";
	
	return 0;	
}
