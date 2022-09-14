#ifndef CompressSparseList_H
	#define CompressSparseList_H

#include "depended/countElements.cpp"
#include "../../helpers/print.cpp"

int** createMat (int size)
{
	int** Base = new int*[3];
	Base[0] = new int [size];
	Base[1] = new int [size];
	Base[2] = new int [size];
	
	return Base;
} 

void displayMat (int** Mat, int row, int col)
{
	int iM, jM, jVal = 0, lim = Mat[2][0];
	
	for(int i=0; i < row; i++)
	{
		for(int j=0; j < col; j++)
		{
			int valueIndex = Mat[2][j];
			if(j == valueIndex)
			{
				print(Mat[0][jVal]);
				jVal++;
			}
			else
			{
				print(0);
			}
		}
		print();
	}
}


int** CompressedSparseList(int** Mat,int row,int col)
{
	int element = countElements(Mat, row, col);
	int** resMat = createMat(element); 
	
	// indecator of resMat
	int rInd = 0, cumalative=0;
	const int rRow = 0, rCol = 1, rEl = 2;
	
	
	// storing the non-zero values 
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			int curVal = Mat[i][j];
			if(curVal != 0)
			{
				resMat[rRow][rInd] = curVal;
				if(j == col-2)
				resMat[rCol][rInd] = cumalative;
				resMat[rEl][rInd] = j;
				
				rInd++;
				cumalative++;
			}
		}
	}
	return resMat;
}

#endif
