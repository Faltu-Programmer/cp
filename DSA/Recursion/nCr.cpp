#include <iostream>
#define cnl cout << "\n"
///#define printY cout << "YES\n"
///#define printN cout << "NO\n"
#define coutV(x) cout << x << " "
#define coutVnl(x) cout << x << "\n"
using namespace std;

int fact (int n)
{
	int result = 1;
	for(int i=2;i <= n;i++)
	{
		result *= i;
	}
	return result;
}
/// recursive (using pascal's tringle)
int nCr (int n, int r)
{
	if(n == 0 or r == 0 or n == r)
	{
		return 1;
	}
	else
	{
		return {nCr(n-1,r-1) + nCr(n-1,r)};
	}
}

/// recursive (using pascal's tringle) O(n).
int nCrI (int n, int r)
{
	int fFact = fact (n);
	int sFact = fact (r);
	int tFact = fact (n-r);
	
	return {fFact/(sFact*tFact)};
}



int main ()
{
	coutVnl (nCr(9,4));
	coutVnl (nCrI(9,4));
	
	return 0;
}
