#include <iostream>
#include "../../DSA/strings/isAnagram.h"
#include "../../DSA/helpers/isEqual.h"
using namespace std;



/// sc-> O(N), tc -> O(N)
bool isRotated(std::string str1,std::string str2)
{
	int strL1 = length(str1), strL2 = length(str2);
	
	if(strL1 != strL2)
	{
		return false;
	}
	
	
	bool diff = !(isEqual(str1[0], str2[0]) or isEqual(str1[strL1/2], str2[strL2/2]) or isEqual(str1[strL1-1], str2[strL2-1]));
	
	bool anagram = isAnagram(str1, str2);
	
	return(diff and anagram);
}









int main ()
{
	string s1 = "waterbottle";
	string s2 = "erbottlewat";

	if(isRotated(s1, s2))
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	
	return 0;	
}
