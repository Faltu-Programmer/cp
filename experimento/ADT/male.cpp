#include <iostream>
#include "ADT.h"
#define nl "\n"

using namespace std;

int coke (int n)
{
	return (n*(n+1))/2;
}
int main ()
{
	int n = 9;
	ADT ob(n);
	for(int i=0; i<n; i++)
	{
		ob.add(coke(i));
	}
	
	cout << ob.getLength() << " " << ob.getSize() << nl;
	return 0;
}
