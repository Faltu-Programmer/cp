#include "isEqual.cpp"
bool isPalindrome (char* arg)
{
	int al = stringLength(arg);
	int j = al-1, i = 0;
	bool flag = true;
	
	while(i < j)
	{
		if(!isEqual(arg[i], arg[j]))
		{
			flag = false;
			break;
		}
		i++,j--;
	}
	return flag;
}
