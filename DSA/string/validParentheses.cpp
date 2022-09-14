// need to debugge.....
///#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
    
public:
    bool isValid(string s) 
    {
        int n = s.length();
        
        if(n%2 == 1)
            return false;
        
        //Need STL library
        //stack<char> stk;
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stk.push(s[i]);
            }
            else
            {
                if(stk.empty())
                {
                    return false;
                }
                char ch = stk.top();
                stk.pop();
                
                if((s[i]==')' && ch=='(')||(s[i]=='}' && ch=='{')||(s[i]==']' && ch=='['))
                {
                    continue;
                }
                else
                    return false;
                
            }
        }
        if(stk.empty())
            return true;
        else
            return false;
            
    }
};



int main()
{
	Solution sObj;
	
	string str="(){}[]";
	
	cout<<sObj.isValid(str);
	
return 0;
}
