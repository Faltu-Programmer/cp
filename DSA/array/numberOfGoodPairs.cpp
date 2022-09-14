/// LC 1512
class Solution 
{
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int sizeOfNums = nums.size();
        int goodPairs = 0;
        for(int i=0;i<sizeOfNums-1;i++)
        {
            for(int j=1;j<sizeOfNums;j++)
            {
                if(nums[i] == nums[j] and i<j)
                {
                    goodPairs++;
                }
            }
        }
        return goodPairs;
    }
};