#ifndef StringLength_H
	#define StringLength_H
	
int stringLength(char* arg)
{
	int size = 0;
	while(*(arg+size) != '\0')
	{
		++size;
	}
	return size;
}
#endif
