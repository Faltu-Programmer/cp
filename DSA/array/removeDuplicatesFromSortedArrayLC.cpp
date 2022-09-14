class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        
        
        /*
        /// brutforce Approch
        int p=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]== p || nums[j]== p)
                {
                    continue;
                }
                else if(nums[i]==nums[j])
                {
                    nums[j]= p;
                }
            }
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(!(nums[i]== p))
            {
                k++;
            }
        }
        sort(nums.begin(),nums.end());
        return k;
        */
        
        /// Two pointer approch.....
        int i,p,q;
        
        for(i=0,p=0,q=1;i<n,q<n;i++)
        {
            if(nums[p]==nums[q])
            {
                q++;
                continue;
            }
            else if(nums[p]!=nums[q])
            {
                nums[p+1] = nums[q];
                p++,q++;
            }
        }
    return p+1;
    }
};
