#include <iostream>

void tR(int n)
{
	if(n > 0)
	{
		printf("%d",n);
		tR(n-1);
		tR(n-1);
		tR(n-1);
	}
}

int main ()
{
	tR(4);
	
	return 0;	
}