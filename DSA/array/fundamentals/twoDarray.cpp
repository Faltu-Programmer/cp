#include <iostream>
using namespace std;

int main ()
{
	int rows = 3, cols = 4, i, j;
	
	/// 1st way to create 2d array
	int a[3][4] = {{1,5},{7,64}};
	
	///accessing a index 1,1
	a[1][1] = 88;
	
	/// traversing the areay
	for(i=0;i<rows;i++)
	{
		for(j=0; j<cols;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
	
	/// 2nd way to create 2d array
	int *b[rows];
	b[0] = new int[cols];
	b[1] = new int[cols];
	b[2] = new int [cols];
	
	///accessing a index 1,1
	b[1][1] = 88;
	
	/// traversing the areay
	for(i=0;i<rows;i++)
	{
		for(j=0; j<cols;j++)
		{
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
	
	
	
	/// 3rd way to create 2d array
	int **c = new int *[3];
	c[0] = new int[cols];
	c[1] = new int[cols];
	c[2] = new int [cols];
	
	///accessing a index 1,1
	c[1][1] = 88;
	
	/// traversing the areay
	for(i=0;i<rows;i++)
	{
		for(j=0; j<cols;j++)
		{
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
	
	
	return 0;
}
