#include <iostream>
using namespace std;

class Solution 
{
public:
	/// iterative apporoch...... TC O(n)
    int searchInsert(int nums[],int n, int target)
    {
        for(int i=0;i<n;i++)
        {
            if(nums[i] >= target)
                return i;
        }
        return n;
    }
    
    /// binary search........... TC O(log n)
    int bSearchInsert(int nums[],int n,int target)
    {
    	int low=0,high=n-1,mid;
    	
    	while(low <= high)
    	{
    		mid = (low+high)/2;
    		
    		if(nums[mid] == target)
    			return mid;
    		else if(nums[mid] > target)
    			high = mid-1;
    		else low = mid+1;
    	}
    	return low;
    }
    
    
    
    
    
    
    /// Recursive approch.......
    int rSearchInsert (int nums[],int n,int t,int i)
    {
    	if( i == (n-1))
    		return n;
    	if(nums[i] >= t)
    		return i;
    	rSearchInsert(nums,n,t,++i);
    }
};

int main()
{
	int array[] = {1,2,3,5,6,7,8,9,10,11};
	Solution obj;
	cout << obj.searchInsert(array,10,4) << '\n';
	//cout<<obj.rSearchInsert(array,10,4,0)<<'\n';
	cout << obj.bSearchInsert(array,10,5)<<'\n';
	
	
	
	return 0;
}
