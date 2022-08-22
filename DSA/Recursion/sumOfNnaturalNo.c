/// TC -> No. Of Calls means O(n)...
#include <stdio.h>
///int k=0;
int sumOfN1 (int n)
{
	///k++;
	if(n == 1)
	{
		return 1;	
	}
	else
	{
		return sumOfN1(n-1) + n;
	}
}


int main ()
{
	int n = 190;
	printf("Sum of %d is = %d\n",n,sumOfN1(n));
	///printf("no of calls = %d", k);
	
	return 0;	
}
