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
	    int n;
	    cin >> n;
	    int ans = 0;
	    
	    if(n < 300)
	    {
	        ans = 3000;
	    }
	    else
	    {
	        ans = n*10;
	    }
	    
	    coutVnl(ans);
	
	}
	
	return 0;
}
