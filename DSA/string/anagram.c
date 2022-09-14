/*
The same set of characters present in both string
in different order is called Anagram.
ex- "decimal" and "medical"
*/

#include <stdio.h>

int size(char *str)
{
	int i=0;
	while(str[i] != '\0'){i++;} 
	return i;
}

/*
	task : do the same using bit masking/merging .
	if two str is not contain duplicate char
*/

int main()
{
	char str1[] = "decimal",str2[] = "medical";
	int hash[26] = {0}, i;
	
	
	
	if(size(str1) != size(str2))
	{
		printf("Not an Anagram");
		return 0;
	}
	
	
	///for(i=0;i<26;i++) hash[i] = 0;
	
	for(i=0;str1[i] != '\0';i++)
	{
		hash[str1[i]-97]++;
	}
	
	for(i=0;str2[i] != '\0';i++)
	{
		if(--(hash[str2[i]-97]) < 0)
		{
			printf("Not an Anagram\n");
			return 0;
		}
	}
	
	printf("Both String are Anagram\n");
	
	return 0;	
}
