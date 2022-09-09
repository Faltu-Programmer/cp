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
