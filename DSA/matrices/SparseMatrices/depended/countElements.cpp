#ifndef CountElements
	#define CountElements

int countElements (int** M, int rows, int cols)
{
	int noOfElements = 0;
	for(int i=0; i < rows; ++i)
	{
		for(int j = 0; j < cols; ++j)
		{
			if(M[i][j] != 0)
			{
				noOfElements++;
			}
		}
	}
	return noOfElements;
}
#endif
