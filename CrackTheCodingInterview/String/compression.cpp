#include <iostream>
#include "../_utility/length.cpp"
using namespace std;


/// this will work for Whole ASCII .......
string compress (string str)
{
	if(str == "")
	{
		return "";
	}
	
	int strLen = length(str);
	int i;
	for(i = 0; i < strLen-1; ++i)
	{
		if(str[i] == str[i+1])
		{
			break;
		}
	}
	if(i == strLen-1)
	{
		return str;
	}
	
	string ans = "";
	int cnt = 1;
	
	/*
	// O(n2)... worked ....
	for(i=0; i < strLen; i++)
	{
		for(int j=i; j < strLen; j++)
		{
			if(str[j] == str[j+1])
			{
				cnt++;
			}
			else
			{
				ans += str[j];
				ans += to_string(cnt);
				cnt = 1;
				i = j;
			}
		}
	}
	*/
	i = 0;
	for(int j = 0; i<strLen-1 and j<strLen; j++)
	{
		if(str[j] == str[j+1])
		{
			cnt++;
		}
		else
		{
			ans += str[j];
			ans += to_string(cnt);
			cnt = 1;
			i = j+1;
		}
	}

	return ans;
}




int main ()
{
	string inputStr = "aaabccc@@@@@@ccdeaaaa";
	
	cout << "INPUT : " << inputStr << '\n';
	cout << "OUTPUT : " << compress(inputStr) << '\n';
	
	return 0;	
}
