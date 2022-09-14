#include "../../helpers/print.cpp"
void printDuplicates (int* arr, int length)
{
	int lastDup = -1;
	
	for (int i=0; i<length-1; i++)
	{
		int curEl = arr[i];
		if(curEl == arr[i+1])
		{
			if(curEl != lastDup)
			{
				print(curEl);
				lastDup = curEl;
			}
		}
	}
	return;
}

