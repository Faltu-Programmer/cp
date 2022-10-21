#include <iostream>
using namespace std;

class Solution 
{
  int si(char c)
  {
    int tmp=0;
    switch (c)
    {
        case 'I':
        case 'i':
          tmp = 1;
          break;
        
        case 'V':
        case 'v':
          tmp = 5;
          break;
        
        case 'X':
        case 'x':
          tmp = 10;
          break;
        
        case 'L':
        case 'l':
          tmp = 50;
          break;
        
        case 'C':
        case 'c':
          tmp = 100;
          break;
        
        case 'D':
        case 'd':
          tmp = 500;
          break;
        
        case 'M':
        case 'm':
          tmp = 1000;
          break;
        
        default:
        	tmp = 0;
    }
    return tmp;
  }
  
  
public:
  int romanToInt(string s) 
  {
    int ans=0;
    int len = s.length();
    int a[len];
    
    for(int i=0;i<len;i++)
    {
      a[i] = si(s[i]);
    }
    
    for(int i=0;i<len;i++)
    {
      if(i<len-1 && a[i]<a[i+1])
      {
        ans -= a[i];
      }
      else
      {
        ans += a[i];
      }
    }
    return ans;
  }
};

int main ()
{
	string str;
	
	Solution s;
	
	cout << "Type a ROMAN number:  ";
	cin >> str;
	cout << "Desimal of \"";
	cout <<str<<"\" is "<< s.romanToInt(str)<<'\n';

	return 0;	
}
