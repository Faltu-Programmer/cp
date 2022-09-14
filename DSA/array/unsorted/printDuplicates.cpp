#include "../../helpers/print.cpp"
#include "../../helpers/max.cpp"
//#include "../../strings/stringLength.cpp"

void printDuplicates (char* arg)
{
	int hash[26] = {0};
	int mx = max(arg);
	
	int diff;
	if(mx >= 65 and mx <=  90)
		diff = 65;
	else if (mx >= 97 and mx <= 122)
		diff = 97;
	
	int len = stringLength(arg);
	
	for(int i=0; i<len; i++)
	{
		hash[arg[i]-diff]++;
	}
	
	for(int i=0; i<26; i++)
	{
		if(hash[i] > 1)
			print((char)(i+diff));
	}
}
