/// What a Idea Bro.........	
#include <stdio.h>

int main()
{
	char *str = "how are you brother..";
	/// scanf("%s",str);
	int vCnt, cCnt, wCnt=1, sCnt, i;
	vCnt = cCnt = sCnt = 0;
	
	for(i=0;str[i]!='\0';i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vCnt++;
				break;
			
			default:
				if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
				{
					cCnt++;
				}
		}
		
		if(str[i] == ' ') {sCnt++;}
	}
	
	wCnt += sCnt;
	printf("vowel = %d\n",vCnt);
	printf("consonant = %d\n",cCnt);
	printf("word = %d\n",wCnt);
	printf("space = %d\n",sCnt);
	printf("english charcter = %d\n",(vCnt+cCnt));
	return 0;
}
