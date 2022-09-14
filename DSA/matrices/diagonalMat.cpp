#ifndef DiagonalMat_H
	#define DiagonalMat_H

#include "../helpers/print.cpp"

class DiagonalMat 
{
	private:
	int* A;
	int Length;
	int Size;
	
	public:
		DiagonalMat ()
		{
			A = nullptr;
			Length = 0;
			Size = 0;
		}
		
		DiagonalMat (int row, int col)
		{
			if(row == col and row > 0)
			{
				Size = row;
				A = new int[Size];
				Length = 0;
			}
		}
		~DiagonalMat()
		{
			delete []A;
		}
		
		int get (int, int);
		void set (int, int, int);
		void displayMat ();
};

int DiagonalMat::get (int row, int col)
{
	return ((row == col) ? A[row-1] : 0);
}
void DiagonalMat::set (int row, int col, int val)
{
	if(row == col)
	{
		A[row-1] = val;
		Length++;
	}
}
void DiagonalMat::displayMat ()
{
	for(int i=1;i<=Size;i++)
	{
		for(int j=1;j<=Size;j++)
		{
			printMat(get(i,j));
		}
		print();
	}
}

#endif
