#include <iostream>
#define nl "\n"
using namespace std;

void solve ()
{
	int x,y;
	cin >> x >> y;
	
	if(x < y)
	{
		y == x*4;
		cout << "YES" << nl;
	}
	else if (x==y)
	{
		/*
		int k = x^y;
		cout << (k%2 == 1?"YES":"NO") << nl;
		*/
		cout << "YES" << nl;
	}
	else 
	{
		cout << "NO" << nl;
	}
}

int main ()
{
	int tc=1;
	cin >> tc;
	
	while (tc--)
	{
		solve();
	}

	return 0;	
}
