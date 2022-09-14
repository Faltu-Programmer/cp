#ifndef CreateMat_H
	#define CreateMat_H
int ** createMat (int rows, int cols)
{
	int** Base = new int*[rows];
	
	//adding one more indes/cell for metadata
	cols += 1;
	
	// creating no of row on each cols
	for(int i = 0; i < rows; i++)
	{
		Base[i] = new int [cols];
	}
	
	return Base;
}
#endif
