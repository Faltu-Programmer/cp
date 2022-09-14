#include "../../helpers/print.cpp"
void printPairSumK (int* arr, int len, int k)
{
	int i=0, j = len-1;
	while (i < j)
	{
		int lVal = arr[i];
		int rVal = arr[j];
		if(lVal+rVal > k)
		{
			j--;
		}
		else if(lVal+rVal < k)
		{
			i++;
		}
		else
		{
			print (lVal, rVal);
			i++,j--;
		}
	}
	return;
}
