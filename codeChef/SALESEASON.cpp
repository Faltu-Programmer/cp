#include <bits/stdc++.h>
#include <iostream>
#define nl '\n'
#define lli long long int

using namespace std;



int main() 
{
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	    int totalCost, totalDiscount = 0;
        cin >> totalCost;
    
        if (totalCost <= 100)
        {
            totalDiscount = 0;
        }
        else if (totalCost <= 1000)
        {
            totalDiscount = 25;
        }
        else if (totalCost <= 5000)
        {
            totalDiscount = 100;
        }
        else if (totalCost > 5000)
        {
            totalDiscount = 500;
        }
    
        cout << (totalCost-totalDiscount) << nl;
    }
	
	return 0;
}
