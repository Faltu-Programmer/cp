#include <iostream>
#define nl "\n"
using namespace std;

void solve ()
{
	int n, sum = 0;
	cin >> n;n -= 1;
	
	int arr[n];
	for(int &x : arr)
	{
		cin >> x;
		sum += x;
	}
	sum += arr[0];
	
	if(n==1)
	{
		cout << sum << nl;
		return;
	}
	else if(n==2)
	{
		int tmp1 = arr[0];
		int tmp2 = arr[1];
		
		if(tmp2 > tmp1)
		{
			sum += (tmp2-tmp1);
		}
		cout << sum << nl;
		return;
	}
	
	
	for(int i=0; i < n-2; i++)
	{
		/*
		int tmp1 = arr[i+1];
		int tmp2 = arr[i];
		if(tmp1 > tmp2)
		{
			sum += (tmp1-tmp2);
		}
		else 
			continue;
		*/
		int t1 = arr[i]+arr[i+1];
		int t2 = arr[i+1]+arr[i+2];
		int op = t2-t1;
		if(t2>t1)
		{
			sum += op;
		}
	}
	
	cout << sum << nl;
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
