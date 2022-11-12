//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    int findIndex (int k)
    {
        return (((k%6) == 0) ? 6 : (k%6));
    }
    
public:
	long long int NoOfChicks(int n)
	{
	    // Code here
	    if(n == 1)
	    {
	        return 1;
	    }
	    
	    long long int  newBorn[7], totalChicks;
	    
	    newBorn[1] = totalChicks = 1;
	    
	    
	    for(int i = 2; i <= n; i++)
	    {
	        if(i <= 6)
	        {
	            newBorn[i] = totalChicks<<1;
	            totalChicks += newBorn[i];
	        }
	        else
	        {
	            int index = findIndex(i);
	            
	            totalChicks -= newBorn[index];
	            newBorn[index] = totalChicks<<1;
	            totalChicks += newBorn[index];
	        }
	    }
	    return totalChicks;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
