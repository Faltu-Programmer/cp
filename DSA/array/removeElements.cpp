/// LC EASY 27
/// both approch works...

class Solution 
{
public:
    int removeElement(vector<int> &nums, int val) 
    {
        int n = nums.size();
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == val)
            {
                nums[i]= INT_MIN;
                cnt++;
            }
        }
        
        /// let see can i do this in a single loop
        /// * YES I CAN
        int p= n-1;
        int q= n-cnt;
        
        for(int i=0;i<q;i++)
        {
            int a = nums[i];
            int b = nums[p];
            if(!(a<0))
            {
                continue;
            }
            else if(!(a<0) && (b<0))
            {
                p--;
            }
            else if(a<0 && b<0)
            {
                while(nums[p]<= -1)
                {
                    p--;
                }
                
                nums[i] = nums[p];
                nums[p] = a;
            }
            else if(a<0 && !(b<0))
            {
                nums[i] = b;
                nums[p] = a;
            }
        }
        
        
        
        /*
        /// brutforce approch.....
        int karnis = n-cnt;
        for(int i=0;i<karnis;i++)
        {
            int tmp1=nums[i];
            for(int j=i+1;j<n;j++)
            {
                int tmp2=nums[j];
                if(!(tmp1<0))
                {
                    break;
                }
                else if(tmp1<0 && tmp2<0)
                {
                    continue;
                }
                else if(tmp1<0 && !(tmp2<0))
                {
                    nums[i] = tmp2;
                    nums[j] = tmp1;
                    break;
                }
            }
        }
        */
        return (n-cnt);
    }
};
