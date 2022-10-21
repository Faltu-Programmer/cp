/// #include <bits/stdc++.h>
#include <iostream>
#define nl '\n'
#define cnl cout<<"\n";
#define lli long long int

using namespace std;

bool formula ( int p, int q)
{
	int a = (p-(2*q));
	int b = (2+q);
	
	return (a%b == 0);
}
int helloEq (int a, int b)
{
	return ((a+a+b+b)+(a*b));
}

int dCheck (int n)
{
	for(int i=1; (i*i) < n; i++)
	{
		if(formula(n, i))
		{
			return i;
		}
	}
}

int solve (int x)
{
	int a = dCheck(x);
	//int b = dCheck(x);
	
	return ((x == helloEq(a, a)) ? 1 : 0);
}


int main() 
{
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	    int x;
	    cin >> x;
	    
	    if(x == 0)
	    	break;
	    
	    
	    int v = solve(x);
	    cout << ((v == 1) ? "YES":"NO");
	    cnl;
	}
	
	return 0;
}

/* testcases
12
13
3
2
5
6
12
21
100
117
100000
876465379
0
*/































/*

lli helloEq (int a, int b)
{
	return ((a+a+b+b)+(a*b));
}

int lim (int n)
{	
	int t1 = (n * 0.30);
	int t2 = (t1+t1);
	int c = 1;
	while(c)
	{
		if(t2 > n)
		{
			float k = 0.28;
			k -= 0.02;
			t1 = (int)(n * k);
			t2 = (t1+t1);
		}
		else
		{
			return t2;
		}
		if(c == n)
		    break;
		    
		c++;
		
	}
	return t2;
	
}

int solve (lli p)
{
    
	if(p < 5)
	{
	    return 0;
	}
	
	int _lim = lim(p);
	for(int i=1;i<_lim;i++)
	{
		for(int j=1;j<_lim;j++)
		{
		    int tmp = helloEq(i, j);
			if(p == tmp)
			{
				return 1;
			}
		}
	}
	return 0;
}
*/
