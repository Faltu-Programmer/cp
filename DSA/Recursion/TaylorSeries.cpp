#include <iostream>
#define nl "\n"
using namespace std;

double e1 (int x, int noOfTerm) /// TC -> O(n^2)
{
	static double pow = 1, fact = 1;
	double result;
	
	if(noOfTerm == 0)
	{
		return 1;
	}
	else
	{
		result = e1(x, noOfTerm-1);
		pow *= x;
		fact *= noOfTerm;
		return {result + pow/fact};
	}
}

double e2 (int x, int noOfTerm) /// TC -> O(n)
{
	static double result;
	
	if(noOfTerm == 0)
	{
		return result;
	}
	else
	{
		result = 1 + (x*result)/noOfTerm;
		return e2 (x, noOfTerm-1);
	}
}

double eI (int x, int noOfTerm) /// TC -> O(n)
{
	double result = 1;
	
	for(; noOfTerm > 0; noOfTerm--)
	{
		result = 1 + (x*result)/noOfTerm;
	}
	return result;
}




int main ()
{
	cout << e1(2,20) << nl;
	cout << e2(2,20) << nl;
	cout << eI(2,20) << nl;

	return 0;	
}
