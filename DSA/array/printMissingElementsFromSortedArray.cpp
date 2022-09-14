#include "../helpers/print.cpp"
void printMissingElements(int* arr, int length)
{
	int diff = arr[0];
	
	for( int i=0; i < length; i++)
	{
		int curVal = arr[i]-i;
		if(curVal != diff)
		{
			while(diff < curVal)
			{
				print(diff+i);
				diff++;
			}
		}
	} 
}
