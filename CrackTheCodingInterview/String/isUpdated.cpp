#include <iostream>	
#include <cstddef>
#define ck(k) cout<<k<<'\n';
using namespace std;


int length(string str)
{
	int size = 0;
	while(str[size] != '\0')
	{
		++size;
	}
	return size;
}



bool isUpdated (string a, string b)
{
	if(a == "" or b == "")
	{
		ck("a or b null");
		return false;
	}
	
	int lenA = length(a);
	int lenB = length(b);
	/*
	int maxLen, minLen;
	string maxStr, minStr;
	
	if(lenA > lenB)
	{
		maxStr = a;
		maxLen = lenA;
		minStr = b;
		minLen = lenB;
	}
	else //if(lenA < lenB)
	{
		maxStr = b;
		maxLen = lenB;
		minStr = a;
		minLen = lenA;
	}
	bool hash[maxLen];
	
	for(int i=0; i<maxLen;i++)
	{
		hash[maxStr[i]-97] = true;
	}
	
	for(int i=0;i<minLen; i++)
	{
		hash[minStr[i]-97] = false;
	}
	
	int cnt = 0;
	for(int i=0; i<maxLen;i++)
	{
		if(hash[maxStr[i]-97] == true)
		{
			cnt++;
		}
	}
	
	*/
	bool hash[26];
	
	for(int i=0; i<lenA;i++)
	{
		hash[a[i]-97] = true;
	}
	
	for(int i=0;i<lenB; i++)
	{
		hash[b[i]-97] = false;
	}
	
	int cnt = 0;
	for(int i=0; i<lenA;i++)
	{
		if(hash[a[i]-97])
		{
			cnt++;
		}
	}
	
	return (cnt == 1);
}

int main ()
{
	string x = "pale";
	string y = "bae";
	
	if(isUpdated(x,y))
	{
		cout << "true...\n";
	}
	else
	{
		cout << "false...\n";	
	}
	
	return 0;
}
