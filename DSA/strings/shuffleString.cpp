/// LC 1528 TC -> O(n) SC -> O(n);
class Solution 
{
public:
    string restoreString(string s, vector<int>& indices)
    {
        int n = s.length();
        char str[n];
        
        for(int i=0;i<n;i++)
        {
            str[indices[i]] = s[i];
        }
        for(int i=0;i<n;i++)
        {
            s[i] = str[i];
        }
        return s;
    }
};