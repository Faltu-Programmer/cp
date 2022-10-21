#include <iostream>
#include "../_utility/display_2D_matrix.h"
using namespace std;


void rotateMatrix(int *origin, int n)
{
	int res[n][n];
	
	for(int i=0; i < n;i++)
	{
		for(int j=0; j < n; j++)
		{
			//cout << origin[i][j] << " ";
			//cout << *(origin+(n*i)+j) << " ";
			res[j][n-i-1] = *(origin+(n*i)+j);
		}
	}
	display((int *)res, n);
}



void rotateMat (int **Mat, int n)
{
	for(int layer = 0; layer < n/2; layer++)
	{
		int first = layer;
		int last = (n - layer - 1);
		for(int i = first; i < last; i++)
		{
			int offset = (i - first);
			
			int top = Mat[first][i];
			Mat[first][i] = Mat[last-offset][first];
			Mat[last-offset][first] = Mat[last][last-offset];
			Mat[last][last-offset] = Mat[i][last];
			Mat[i][last] = top;
		}
	}
	//return true;
}



int main ()
{
	int n = 5;
	//int origin [n][n];
	
	int **Mat = new int*[n];
	for(int i=0; i<n;i++)
	{
		Mat[i] = new int [n];
	}
	
	int cnt = 11;
	for(int i=0; i < n;i++)
	{
		for(int j=0; j < n; j++)
		{
			//origin[i][j] = cnt++;
			Mat[i][j] = cnt++;
		}
	}
	
	//show((int *)origin, n);
	//rotateMatrix((int *)origin, n);
	//show((int *)origin, n);
	
	
	
	display(Mat, n);
	rotateMat(Mat, n);
	display(Mat, n);
	
	return 0;	
}
