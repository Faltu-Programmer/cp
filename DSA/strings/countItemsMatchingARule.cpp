#include <iostream>
using namespace std;

int countMatches(string items[],string rk,string rv)
{
	int sizeOfStr=3;
	int ansCnt=0;
	for(int i=0;i<sizeOfStr;i++)
	{
		string str = items[i][0];
		bool x = ((ruleKey == str) and (ruleValue == str));
		
		string str1 = items[i][1];
		bool y = ((ruleKey == str1) and (ruleValue == str1));
		
		string str2 = items[i][2];
		bool z = ((ruleKey == str2) and (ruleValue == str2));
		
		if(x or y or z)
		{
			ansCnt++;
		}
	}
    return ansCnt;
}


int main ()
{
	
	string a1[] = {"phone","blue","pixel"};
	string a2[] = {"computer","silver","lenovo"};
	string a3[] = {"phone","gold","iphone"};
	string key1 = "color",val1 = "silver";
	string a[] = {a1,a2,a3};
	
	string b1[] = {"phone","blue","pixel"};
	string b2[] = {"computer","silver","phone"};
	string b3[] = {"phone","gold","iphone"};
	string key2 = "type",val2 = "phone";
	string b[] = {b1,b2,b3};

	cout << "The Output :\n";	
	cout << countMatches(a,key1,val1) << "\n";
	cout << countMatches(b,key2,val2) << "\n";
	
	
	return 0;	
}
