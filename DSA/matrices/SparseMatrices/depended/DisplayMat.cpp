// only usable for Co-Ordinate Matrices

#ifndef DisplayMat_H
	#define DisplayMat_H

#include "../../../helpers/print.cpp"

void DisplayMat (int** Mat)
{
	//taking rows,cols data from matrice's Metadata
	int rows = Mat[0][0], cols = Mat[1][0];
	
	int iM, jM, jVal = 1, lim = Mat[2][0];
	
	for(int i=1; i < rows; i++)
	{
		for(int j=1; j < cols; j++)
		{
			iM = Mat[0][jVal];
			jM = Mat[1][jVal];
			
			//checking Valid indexs
			bool cond1, cond2, isValidIndex;
			isValidIndex = cond1 = cond2 = false;
			
			cond1 = (i == iM and j == jM);
			cond2 = (jVal <= lim);
			isValidIndex = (cond1 and cond2);
			
			if(isValidIndex)
			{
				print(Mat[2][jVal]);
				jVal++;
			}
			else
			{
				print(0);
			}
		}
		print();
	}
	print();
}
#endif
