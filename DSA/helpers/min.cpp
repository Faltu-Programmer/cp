#include "../strings/stringLength.cpp"
#include "print.cpp"
int min (int* arr, int length)
{
	int minElement = 0;
	for(int i=0; i<length; i++)
	{
		if(minElement > arr[i])
		{
			minElement = arr[i];
		}
	}
	return minElement;
}

char min (char* arg)
{
	int length = stringLength(arg);
	char maxElement = 'z';
	
	
	for(int i=0; i<length; i++)
	{
		if(maxElement > arg[i])
		{
			maxElement = arg[i];
		}
	}
	return maxElement;
}
