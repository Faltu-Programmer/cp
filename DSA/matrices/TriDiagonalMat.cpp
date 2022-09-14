#ifndef TriDiagonalMat_H
	#define TriDiagonalMat_H

#include "../helpers/print.cpp"

class TriDiagonalMat
{
private:
	int* A;
	int Dimension;
	int Size;

public:
	TriDiagonalMat()
	{
		A = nullptr;
		Dimension = Size = 0;
	}
	TriDiagonalMat(int s):TriDiagonalMat(s,s)
	{
	}
	TriDiagonalMat (int row, int col)
	{
		if(row == col and row > 0)
		{
			Dimension = row;
			Size = (3*Dimension - 2);
			A = new int[Size];
		}
	}
	
	// row major indexing
	int index_rm (int, int);
	// column major indexing
	int index_cm (int, int);
	int get (int, int);
	void set (int, int, int);
	void displayMat ();
	void display ();
	
	~TriDiagonalMat ()
	{
		delete []A;
		A = nullptr;
	}
	
};


int TriDiagonalMat::index_rm (int row, int col)
{
	int res = -1;
	
	if(row-col == 1)
	{
		res = row-2;
	}
	else if(row-col == 0)
	{
		res = Dimension-1 + row-1;
	}
	else if(row-col == -1)
	{
		res = 2*Dimension-1 + row-1;
	}
	
	return res;
}

int TriDiagonalMat::index_cm (int row,int col)
{
	int res = -1;
	
	
	
	return res;
}


int TriDiagonalMat::get (int row, int col)
{
	int index = index_rm(row, col);
	return ((index != -1) ? A[index] : 0);
}

void TriDiagonalMat::set(int row,int col,int val)
{
	int index = index_rm(row, col);
	if(index != -1)
	{
		A[index] = val;
	}
}

void TriDiagonalMat::displayMat ()
{
	for(int i=1;i <= Dimension;i++)
	{
		for(int j=1;j <= Dimension;j++)
		{
			int val = get(i,j);
			print(val);
		}
		print();
	}
}

void TriDiagonalMat::display ()
{
	for(int i=0;i < Size;i++)
	{
		print(A[i]);
	}
}


#endif
