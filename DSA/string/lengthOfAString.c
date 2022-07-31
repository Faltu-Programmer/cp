#include <stdio.h>

int los(char *A)
{
	int size = 0;
	
	while(*(A+size) != '\0')
	{
		++size;
	}
	return size;
}

int main ()
{
	char *str = "hdsaj";
	//scanf("%[^\n]c",str);;
	//gets(str);
	
	printf("size = %d", los(str));
	return 0;	
}
