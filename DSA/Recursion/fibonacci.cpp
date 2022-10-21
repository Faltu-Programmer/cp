#include <iostream>
#define cnl cout << "\n"
#define printY cout << "YES\n"
#define printN cout << "NO\n"
#define coutV(x) cout << x << " "
#define coutVnl(x) cout << x << "\n"
using namespace std;

/// Exersive Recursion
/// when a function calling itself multiple time 
/// for the same value.  TC -> O(2^n)
int fibonacci (int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}

/// Same with memoisation

int fibMemo (int n)
{
	
	
	
	

}





int main ()
{
	coutV(fibonacci(8));
	
	return 0;
}
