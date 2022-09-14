<<<<<<< HEAD
﻿int max (int* arr, int length)
=======
﻿#include "../strings/stringLength.cpp"

int max (int* arr, int length)
>>>>>>> working
{
	int maxElement = 0;
	for(int i=0; i<length; i++)
	{
		if(maxElement < arr[i])
		{
			maxElement = arr[i];
		}
	}
	return maxElement;
}
<<<<<<< HEAD
=======

char max (char* arg)
{
	int length = stringLength(arg);
	char maxElement = 'A';
	
	
	for(int i=0; i<length; i++)
	{
		if(maxElement < arg[i])
		{
			maxElement = arg[i];
		}
	}
	return maxElement;
}
>>>>>>> working
