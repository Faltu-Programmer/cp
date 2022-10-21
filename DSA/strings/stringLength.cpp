int stringLength(char* arg)
{
	int size = 0;
	while(*(arg+size) != '\0')
	{
		++size;
	}
	return size;
}
