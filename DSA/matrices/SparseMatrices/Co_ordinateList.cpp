#ifndef Co_ordinateList_H
	#define Co_ordinateList_H

#include "depended/countElements.cpp"
#include "depended/createMat.cpp"
#include "depended/DisplayMat.cpp"



int** Co_ordinateList (int** Mat, int rows, int cols)
{
	int elements = countElements(Mat, rows, cols);
	int** resMat = createMat(3,elements+1); 
	
	// indecator of resultMatrix
	int rInd = 1;
	const int rRow = 0, rCol = 1, rEl = 2;
	
	// storing metadata of Mat at 0'th column
	resMat[rRow][0] = rows;
	resMat[rCol][0] = cols;
	resMat[rEl][0] = elements;
	
	
	// storing the non-zero values 
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			int curVal = Mat[i][j];
			if(curVal != 0)
			{
				resMat[rRow][rInd] = i;
				resMat[rCol][rInd] = j;
				resMat[rEl][rInd] = curVal;
				
				rInd++;
			}
		}
	}
	//DisplayMat(resMat);
	return resMat;
}
#endif
























/*

int main ()
{
	int m = 7, n = 6;
	int** Mat = createSquareMat(m,n);
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
		{
			Mat[i][j] = 0;
		}
	}
	
	Mat[1][3] = 1;
	Mat[1][5] = 4;
	Mat[2][4] = 2;
	Mat[3][5] = 7;
	Mat[4][1] = 3;
	Mat[5][4] = 6;
	Mat[5][5] = 0;
	Mat[6][3] = 9;
	Mat[6][4] = 1;
	
	for(int i=1; i<m;i++)
	{
		for(int j=1; j<n;j++)
		{
			print(Mat[i][j]);
		}
		print();
	}
	print();

	int** nMat = Co_ordinateList(Mat, m, n);
	
	delete[] Mat;
	Mat = nullptr;
	
	return 0;
}
*/
