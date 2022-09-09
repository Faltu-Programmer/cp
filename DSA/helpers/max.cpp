int max (int* arr, int length)
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
