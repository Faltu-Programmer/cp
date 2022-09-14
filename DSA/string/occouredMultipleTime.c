#include <stdio.h>
int main()
{
	char str[] = "a quick brown fox jumps over the lazy dog";
	
	int hashS[26], i, hashC[26];
	
	
	for(i=0;i<26;++i)
	{
		hashS[i] = hashC[i] = 0;
	}
	
	
	for(i=0;str[i] != '\0';++i)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			hashS[(str[i]-97)]++;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			hashC[(str[i]-65)]++;
		}
	}
	
	/// For repeatation of Small later...
	for(i=0;i<26;++i)
	{
		if(hashS[i] > 1)
		{
			printf("Char is %c ",(97+i));
			printf("and %d times\n",hashS[i]);
		}
	}printf("\n\n");
	
	/*
	/// For Repetation of Capital later
	for(i=0;i<26;++i)
	{
		if(hashC[i] > 1)
		{
			printf("Char is %c ",(65+i));
			printf("and %d times\n",hashC[i]);
		}
	}
	*/
	
	return 0;	
}
