#include <stdio.h>

#define and &
#define AND &&

#define or |
#define OR ||


int main ()
{
	char str[] = "a quick brown fox jumps over the lazy dog";
	
	int hC, hS, i, x;
	hC = hS = i = x = 0;
	
	for(;str[i] != '\0';++i)
	{
		x=1;
		if(str[i] >= 65 AND str[i] <= 90)
		{
			x = x << (str[i]-65);
			
			if(hC and x)
				printf("duplicate = %c \n",str[i]);
			
			hC = hC or x;
		}
		if(str[i] >= 97 AND str[i] <= 122)
		{
			x = x << (str[i]-97);
			
			if(hS and x)
			{
				printf("duplicate = %c \n",str[i]);
				
			}
			else
			{
				hS = hS or x;
			}
		}
	}
	

	
	return 0;	
}
