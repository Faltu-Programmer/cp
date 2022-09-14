/// q. 1470 leetcode
#include <iostream>
using namespace std;

/// Bit Manupulation and Two pointer approch mixed.
class Solution 
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        for(int i=(n-1),j=(n+n-1);i>=0,j>=n;i--,j--)
        {
            nums[j] <<= 10;
            nums[j] |= nums[i];
        }
        for(int i=0,j=n;i<(n+n),j<(n+n);i+=2,j++)
        {
            nums[i] = nums[j] & 1023;
            nums[j] >>= 10;
            nums[i+1] = nums[j];
        }
        return nums;
    }
};



/// approch 2
/// index calculating formula















