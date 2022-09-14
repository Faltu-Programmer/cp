#include <iostream>
using namespace std;

void insertElementInSortedArray(int a[],int n,int key)
{
	// if length == size then just return;
	int i = n - 1;
	
	while(key < a[i])
	{
		a[i+1] = a[i];
		i--;
	}
	a[i+1] = key;
}



int main ()
{
	int n = 8;
	int a[8] = {1,3,6,8,10,13,23};
	insertElementInSortedArray(a,n-1,0);

	for(int x : a)
		cout << x << " ";
	
	return 0;	
}
