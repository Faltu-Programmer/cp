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
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    
	    int t1 = x+y;
	    int t2 = x+z;
	    int t3 = y+z;
	    int t4 = x+y+z;
	    
	    if((w == x) or (w == y) or (w == z) or (w == t1)or(w == t2)or(w == t3)or(w == t4))
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
