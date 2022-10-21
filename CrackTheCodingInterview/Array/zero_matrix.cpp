#include <iostream>
#include "../_utility/display_2D_matrix.h"
using namespace std;

/*
/// perfecto workingo ....... SC-> O(n^2)
void zeroMat (int **mat, int rows, int cols)
{
	if(rows == 0)
	{
		return;
	}
	
	int tEle = rows*cols;
	
	int index [tEle][2];
	int k = 0;
	for(int i=0; i < rows;i++)
	{
		for(int j=0; j < cols; j++)
		{
			if(mat[i][j] == 0)
			{
				index[k][0] = i;
				index[k][1] = j;
			}
			else
			{
				index[k][0] = index[k][1] = -1;
			}
			k++;
		}
	}
	
	
	for(int p=0; p < tEle; p++)
	{
		if(index[p][0] == -1)
		{
			continue;
		}
		else
		{
			int r = index[p][0];
			int c = index[p][1];
			
			for(int x = 0; x < rows; x++)
			{
				mat[x][c] = 0;
			}
			
			for(int x = 0; x < cols; x++)
			{
				mat[r][x] = 0;
			}
		}
	}
	//display(mat, rows, cols);
}
*/

/*
/// again perfecto workingo ... SC-> O(n+n) => O(n)..
void zeroMat (int **mat, int rows, int cols)
{ 
	int ro_[rows];
	int co_[cols];
	
	for(int x=0; x<rows;x++)
	{
		ro_[x] = 1;
	}
	for(int x=0; x<cols;x++)
	{
		co_[x] = 1;
	}
	
	
	for(int i=0; i < rows;i++)
	{
		for(int j=0; j < cols; j++)
		{
			if(mat[i][j] == 0)
			{
				ro_[i] = 0;
				co_[j] = 0;
			}
		}
	}
	
	for(int i = 0; i < rows; i++)
	{
		if(ro_[i] == 0)
		{
			for(int j = 0; j < cols; j++)
			{
				mat[i][j] = 0;
			}
		}
	}
	
	
	for(int i = 0; i < cols; i++)
	{
		if(co_[i] == 0)
		{
			for(int j = 0; j < rows; j++)
			{
				mat[j][i] = 0;
			}
		}
	}
}
*/


/// again perfecto workingo ... SC-> O(1)
void zeroMat (int **mat, int rows, int cols)
{ 
	if(rows == 1 and cols == 1)
	{
		return;
	}
	
	bool rox, cox;
	rox = cox = false;
	
	if(mat[0][0] == 0)
	{
		rox = cox = true;
	}
	else
	{
		/// checking 1st col for 0....
		for(int i=1; i < rows;i++)
		{
			if(mat[i][0] == 0)
			{
				rox = true;
				break;
			}
		}
		/// checking 1st row for 0.....
		for(int j=1; j < cols; j++)
		{
			if(mat[0][j] == 0)
			{
				cox = true;
				break;
			}
		}
	}
	
	/// setting indicators at first row and first cols
	for(int i=1; i < rows;i++)
	{
		for(int j=1; j < cols; j++)
		{
			if(mat[i][j] == 0)
			{
				mat[0][j] = 0;
				mat[i][0] = 0;
			}
		}
	}
	
	display(mat, rows, cols);
	
	
	
	for(int i = rows-1; i >= 0; i--)
	{
		for(int j = cols-1; j >= 0; j--)
		{
			if(mat[i][0] == 0 or mat[0][j] == 0)
			{
				mat[i][j] = 0;
			}
		}
	}
	
	
	if(rox)
	{
		for(int i=0; i < rows;i++)
		{
			mat[i][0] = 0;
		}
	}
	
	if(cox)
	{
		for(int j=0; j < cols; j++)
		{
			mat[0][j] = 0;
		}
	}
}



void zeroMat_optimal (int **mat, int rows, int cols)
{
	bool cox = false; 
	
	for(int i=1; i < rows;i++)
	{
		for(int j=1; j < cols; j++)
		{
			if(mat[i][j] == 0)
			{
				mat[0][j] = 0;
				mat[i][0] = 0;
			}
		}
	}
	
	display(mat, rows, cols);
	
	
	
	for(int i = rows-1; i >= 0; i--)
	{
		for(int j = cols-1; j >= 0; j--)
		{
			if(mat[i][0] == 0 or mat[0][j] == 0)
			{
				mat[i][j] = 0;
			}
		}
	}
}



int main ()
{

	int _rows = 9;
	int _cols = 9;
	
	
	int **Mat = new int*[_rows];
	for(int i=0; i<_rows;i++)
	{
		Mat[i] = new int [_cols];
	}
	
	for(int i=0; i < _rows;i++)
	{
		for(int j=0; j < _cols; j++)
		{
			Mat[i][j] = 1;
		}
	}
	
	
	
	
	//Mat[0][0] = 0;
	Mat[_rows/2][_cols/2] = 0;
	Mat[0][_cols-1] = 0;
	Mat[_rows-1][_cols-1] = 0;
	
	
	//Mat[3][5] = 0;
	
	
	display(Mat, _rows, _cols);
	zeroMat_optimal(Mat, _rows, _cols);
	display(Mat, _rows, _cols);
	
	return 0;
}
