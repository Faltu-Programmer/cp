/// LC 1365

/// bruteforce approch...
class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int sizeOfNum=nums.size();
        vector <int> ans;
        
        for(int i=0;i<sizeOfNum;i++)
        {
            int totalOccourence=0;
            for(int j=0;j<sizeOfNum;j++)
            {
                bool condition = ((i != j) and (nums[i]>nums[j]));
                if(condition)
                {
                    totalOccourence++;
                }
            }
            ans.push_back(totalOccourence);
        }
        return ans;
    }
};

///Using hash table.   TC(n logn);
class Solution 
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> hash(101,0);
        
        for(int x : nums)
        {
            hash[x]++;
        }
        
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            int limit = nums[i]-1;
            
            for(int j=limit;j>=0;j--)
            {
                sum += hash[j];
            }
            nums[i] = sum;
        }
        return nums;
    }
};



