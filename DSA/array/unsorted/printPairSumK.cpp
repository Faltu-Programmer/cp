#include "../../helpers/print.cpp"
#include "../../helpers/max.cpp"
void printPairSumK (int* arr, int len, int k)
{
	
	int hashLen = max(arr, len);
	int hash[hashLen];
	for(int &x : hash)
	{
		x = 0;
	}
	
	for(int i=0; i<len; i++)
	{
		hash[arr[i]]++;
		if(hash[i] > 0)
		{
			int rVal = i;
			int lVal = k-i;
			if(hash[lVal] > 0)
			{
				print(lVal, rVal);
			}
		}
	}
	
	return;
}
