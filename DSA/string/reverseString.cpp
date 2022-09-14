#include "stringLength.cpp"
#include "../helpers/swap.cpp"

char* reverseString (char* arg)
{
	int argLen = stringLength (arg);
	int i = 0, j = argLen-1;
	
	while(i < j)
	{
		swap(arg[i],arg[j]);
		i++, j--;
	}
	return arg;
}
