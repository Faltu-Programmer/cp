#include <bits/stdc++.h>
#include <iostream>
#define nl "\n"
#define cnl cout << "\n"
#define coutY cout << "YES\n"
#define coutN cout << "NO\n"
#define coutV(x) cout << x << " "
#define coutVnl(x) cout << x << "\n"
#define lli long long int

using namespace std;



int main() 
{
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	    int a, b, c;
	    cin >> a >> b >> c;
	    double avg;
	    avg = (double)(a+b)/2;
	    
	    if(avg > c)
	    {
	        coutY;
	    }
	    else
	    {
	        coutN;
	    }
	}
	
	return 0;
}
