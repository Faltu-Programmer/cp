/// 2357. Make Array Zero by Subtracting Equal Amounts (LC)

class Solution 
{
public:
    int minimumOperations(vector<int>& nums) 
    {
        int sizeOfNum = nums.size();
        
        if(sizeOfNum == 0 or sizeOfNum == 1 and nums[0] == 0) return 0;
        if(sizeOfNum == 1) return 1;
        
        
        
        int minNum, opCount = 0;
        bool flag;
        
        for(int i=0;i<sizeOfNum;i++)
        {
            minNum = INT_MAX;
            
            for(int j=0;j<sizeOfNum;j++)
            {
                if(nums[j] > 0)
                    minNum = min(minNum, nums[j]);
            }
            
            flag = false;
            
            for (int k = 0; k<sizeOfNum;k++)
            {
                if(nums[k] > 0)
                {
                    nums[k] -= minNum;
                    flag = true;
                }
            }
            
            if(flag)
            {
                opCount++;
            }
        }
        return opCount;
    }
};
