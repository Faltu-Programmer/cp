#include <iostream>

#include "Co_ordinateList.cpp"
#include "AddSparseMat.cpp"
//#include "depended/createMat.cpp"
#include "depended/DisplayMat.cpp"

using namespace std;

int** tempF ();

int main ()
{
	int** aMat;
	int** bMat;
	int** rMat;
	
	aMat = tempF(1);
	bMat = tempF(3);
	rMat = AddSparseMat(aMat, bMat);
	
	//DisplayMat(rMat);
	
	
	return 0;
}















int** tempF (int k)
{
	int m = 7, n = 6;
	int** Mat = createMat(m,n);
	
	
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
		{
			Mat[i][j] = 0;
		}
	}
	
	Mat[1][3] = 1+k;
	Mat[1][5] = 4+k;
	Mat[2][4] = 2+k;
	Mat[3][5] = 7+k;
	Mat[4][1] = 3+k;
	Mat[5][4] = 6+k;
	Mat[5][5] = 8+k;
	Mat[6][3] = 9+k;
	Mat[6][4] = 1+k;
	
	/*
	for(int i=1; i<m;i++)
	{
		for(int j=1; j<n;j++)
		{
			print(Mat[i][j]);
		}
		print();
	}
	print("-------------------\n");
	*/
	
	int** nMat = Co_ordinateList(Mat, m, n);
	
	delete[] Mat;
	Mat = nullptr;
	
	return nMat;
}
