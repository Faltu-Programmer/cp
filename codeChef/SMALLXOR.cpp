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
	    int n, x, y;
        cin >> n >> x >> y;
    
        int baseArray[n];
        priority_queue <int, vector<int>, greater<int> > pq;
        
        for(int &t : baseArray)
        {
            cin >> t;
            pq.push(t);
        }
        
        
        while(y > 0)
        {
            int minVal = pq.top();
            int xorVal = minVal xor x;
            
            if( xorVal > minVal)
            {
                pq.pop();
                pq.push(xorVal);
                y--;
            }
            else
                break;
        }
        
        if(y%2)
        {
            int minVal = pq.top();
            pq.pop();
            pq.push(minVal xor x);
        }
        
        while( pq.size())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << nl;
        
	}
	
	return 0;
}
