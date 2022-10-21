#ifndef display_2D_matrix_H
	#define display_2D_matrix_H


void display (int *origin, int n)
{
	for(int i=0; i < n;i++)
	{
		for(int j=0; j < n; j++)
		{
			//cout << origin[i][j] << " ";
			std::cout << *(origin+(n*i)+j) << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n' << '\n';
}

void display (int **origin, int n)
{
	for(int i=0; i < n;i++)
	{
		for(int j=0; j < n; j++)
		{
			//cout << origin[i][j] << " ";
			std::cout << origin[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n' << '\n';
}


void display (int **origin, int _rows, int _cols)
{
	for(int i=0; i < _rows;i++)
	{
		for(int j=0; j < _cols; j++)
		{
			//cout << origin[i][j] << " ";
			std::cout << origin[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n' << '\n';
}
#endif
