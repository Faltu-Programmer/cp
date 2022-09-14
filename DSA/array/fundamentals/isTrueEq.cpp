#include <iostream>
#include <math.h>

int natural (int n)
{
	return (n*(n+1))/2;
}

int power (int m)
{
	return pow(2,m)-1;;
}

int main()
{
	for(int i=1;i<10;i++)
	{
		std :: cout << i << " ==> ";
		std :: cout << natural(i) << " ";
		std :: cout << power(i) << "\n";
	}
	
	return 0;
}
