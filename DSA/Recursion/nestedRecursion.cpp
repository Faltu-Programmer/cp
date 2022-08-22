#include <iostream>
using namespace std;

int nR(int n)
{
	if(n > 100)
	{
		return {n-10};
	}
	else
	{
		return nR ( nR (n+11) );
	}
}

int main ()
{
	cout << nR(80) << "\n";
	return 0;	
}