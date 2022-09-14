#include <iostream>
#define cnl cout << "\n"
//#define printY cout << "YES\n"
//#define printN cout << "NO\n"
#define coutV(x) cout << x << " "
#define coutVnl(x) cout << x << "\n"
using namespace std;


void printSubarray (int ar[], int n)
{	
	
	int p = 0, z = (n*(n+1))/2;
	for (int i=0; i<n;i++)
	{
		for (int j=i;j<n;j++)
		{
			for (int k=i;k<=j;k++)
			{
				coutV(ar[k]);
			}
			p++;
			cnl;
		}
	}
	cnl;
	coutV(p)<< " == " << z;
}


int main ()
{
	int n = 3;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		arr[i] = i+1;
	}	
	
	printSubarray(arr,n);
	
	return 0;
}
