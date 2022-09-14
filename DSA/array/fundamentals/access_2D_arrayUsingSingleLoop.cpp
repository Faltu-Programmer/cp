
/// may be :: not hapoening...


#include <iostream>

int main ()
{
	int rows = 3, cols = 4;
	int *b[rows];
	b[0] = new int[cols];
	b[1] = new int[cols];
	b[2] = new int [cols];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			b[i][j] = i+j;
		}
		
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			std::cout<< b[i][j] <<" ";
		}
		std::cout<<"\n";
	}	
	
	
	std::cout<<"\n\n";
	int k = rows*cols;
	int *p = new int [5];

	for(int i=0;i<k;i++)
	{
		*(p+i) = i*i;
	}
	
	for(int i=0;i<k;i++)
	{
		std :: cout << (b+i) << " ";
	}
	
	
	
	
	return 0;	
}
