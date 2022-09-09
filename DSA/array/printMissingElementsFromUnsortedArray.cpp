#include "../helpers/print.cpp"
#include "../helpers/max.cpp"
void printMissingElements (int* arr, int length)
{
	int hastLen = max(arr, length);
	int hash[hastLen];
	for(int &x : hash)
	{
		x = 0;
	}
	
	for(int i=0; i<length; i++)
	{
		hash[arr[i]]++;
	}
	for(int i=0; i<hastLen; i++)
	{
		if(hash[i] == 0)
		{
			print(i);
		}
	}
	return;
}
