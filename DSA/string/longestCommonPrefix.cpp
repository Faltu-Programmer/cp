#include <iostream>
using namespace std;

class Solution 
{
    bool equals (char a, char b)
    {
        return (a == b ? true : false);
    }
public:
    string longestCommonPrefix(vector<string>& str) 
    {
        int n=str.size();
        int m=INT_MAX;
        string tmp;
        for(int i=0;i<n;i++)
        {
            int k = str[i].length();
            if(m>k)
            {
                m=k;
                tmp=str[i];
            }
        }
        
        int cnt=0,t=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(equals(tmp[i],str[j][i]))
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if(cnt == n)
            {
                t++;
                cnt=0;
            }
        }
        return (t>0 ? tmp.substr(0,t):"");
    }
};



int main()
{
	Solution s;
	
	
	
}