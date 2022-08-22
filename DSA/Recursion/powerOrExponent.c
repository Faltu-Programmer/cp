#include <stdio.h>
#include <math.h>

int power (int m, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		int k = m*m;
		if(n % 2 == 0)
		{
			return power(k, n/2) ;
		}
		else
		{
			return m * power(k, (n-1)/2);
		}
	}
}

int main ()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	///printf("\npow => %d\n",pow (x,y));
	printf("power => %d\n",power (x,y));
	
	return 0;
}
