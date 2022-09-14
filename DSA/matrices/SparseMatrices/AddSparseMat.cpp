#ifndef AddSparseMat_H
	#define AddSparseMat_H

#include "depended/countElements.cpp"
#include "depended/createMat.cpp"
#include "depended/DisplayMat.cpp"
#include "../../helpers/print.cpp"


int** AddSparseMat (int** MatA, int** MatB)
{
	// As 1st,2nd,3rd row of 1st column stores
	// the Metadata , so we can use them here
	int rowsA = MatA[0][0];
	int colsA = MatA[1][0];
	
	int rowsB = MatB[0][0];
	int colsB = MatB[1][0];
	
	//checking both Matrices size are equal or not
	bool isValidSize = false;
	isValidSize = (rowsA==rowsB and colsA==colsB);
	if(! isValidSize)
	{
		return nullptr;
	}
	
	
	// creating a list of totalElements by 
	//adding already stored meta data of Mats
	// at 2nd row and 0th column.
	// 1's base indexing : 3rd row, 1st column
	
	int MatA_El = MatA[2][0];
	int MatB_El = MatB[2][0];
	int totalElements = MatA_El + MatB_El;
	
	// resultantMatrix
	int** resMat = createMat(3,totalElements);
	
	int rIndA, cIndA, vIndA, rIndB, cIndB, vIndB;
	int cIndR = 1, vIndR;
	
	int iA = 1, iB = 1;
	
	
	for(int j = 1; j < totalElements; j++)
	{
		// taking rows and cols of MatA and MatB
		rIndA = MatA[0][iA];
		cIndA = MatA[1][iA];
		vIndA = MatA[2][iA];
		
		rIndB = MatB[0][iB];
		cIndB = MatB[1][iB];
		vIndB = MatB[2][iB];
			
		//checking, where addition could be done
		if(rIndA == rIndB)
		{
			if(cIndA == cIndB)
			{
				vIndR = vIndA + vIndB;
				resMat[0][cIndR] = rIndA;
				resMat[1][cIndR] = cIndA;
				resMat[2][cIndR] = vIndR;
				
				iA++, iB++, cIndR++;
			}
			else if(cIndA < cIndB)
			{
				resMat[0][cIndR] = rIndA;
				resMat[1][cIndR] = cIndA;
				resMat[2][cIndR] = vIndA;
				
				iA++, cIndR++;
			}
			else if(cIndB < cIndA)
			{
				resMat[0][cIndR] = rIndB;
				resMat[1][cIndR] = cIndB;
				resMat[2][cIndR] = vIndB;
				
				iB++, cIndR++;
			}
		}
		else if(rIndA < rIndB)
		{
		 	resMat[0][cIndR] = rIndA;
			resMat[1][cIndR] = cIndA;
			resMat[2][cIndR] = vIndA;
				
			iA++, cIndR++;
		}
		else if(rIndB < rIndB)
		{
		 	resMat[0][cIndR] = rIndB;
			resMat[1][cIndR] = cIndB;
			resMat[2][cIndR] = vIndB;
				
			iB++, cIndR++;
		}
	} // for loop end here
	
	//realesing resources
	delete []MatA;
	delete []MatB;
	MatA = nullptr;
	MatB = nullptr;
	
	//storeing Metadata...
	totalElements = countElements(resMat,rIndA,cIndA);
	resMat[0][0] = rIndA;
	resMat[1][0] = cIndA;
	resMat[2][0] = totalElements;
	
	
	for(int i = 1; i < rIndA; i++)
	{
		for(int j = 1; j < cIndA; j++)
		{
			print(resMat[i][j]);
		}
		print();
	}
	print();
	
	//DisplayMat(resMat);
	return resMat;
}
#endif
