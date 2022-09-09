/// LC 1431

/// bruteForce approch .....
class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int noOfKids = candies.size();
        vector<bool> result(noOfKids,false);
        
        for(int i=0;i<noOfKids;i++)
        {
            int curElement = candies[i]+extraCandies;
            bool tmpFlag = true;
            for(int j=0;j<noOfKids;j++)
            {
                if(i==j) continue;
                tmpFlag = (curElement >= candies[j]);
                if(!tmpFlag)
                {
                    tmpFlag=false;
                    break;
                }
            }
            if(tmpFlag)
            {
                result[i] = tmpFlag;
            }
        }
        return result;
    }
};


/// O(n) approch
class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxN = INT_MIN;
        vector<bool> ans;
        
        for(int x: candies)
            maxN = max(maxN, x);
        
        for(int x: candies)
        {
            bool currState=(x+extraCandies)>=maxN;
            ans.push_back((currState ?true:false));
        }
        return ans;
    }
};


/// O(n) approch 2
class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxN = *max_element(candies.begin(),candies.end());
        vector<bool> ans;
        
        
        for(int x: candies)
        {
            bool currState=(x+extraCandies)>=maxN;
            ans.push_back((currState ?true:false));
        }
        return ans;
    }
};

