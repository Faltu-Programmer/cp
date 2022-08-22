#include <stdio.h>

void TOH (int noOfDisks, char A, char B, char C)
{
	if(noOfDisks > 0)
	{
		int currentDisks = noOfDisks-1;
		TOH(currentDisks, A, C, B);
		printf("%c => %c\n", A, C);
		TOH(currentDisks, B, A, C);
	}
}


int main ()
{
	TOH(3,'A', 'B', 'C');
	
	return 0;
}
