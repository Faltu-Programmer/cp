#ifndef LowerTringulerMat_H
	#define LowerTringulerMat_H

#include "../helpers/print.cpp"

class LowerTringulerMat
{
private:
	int* A;
	int Dimension;
	int Size;

public:
	LowerTringulerMat()
	{
		A = nullptr;
		Dimension = Size = 0;
	}
	LowerTringulerMat(int s):LowerTringulerMat(s,s)
	{
	}
	LowerTringulerMat (int row, int col)
	{
		if(row == col and row > 0)
		{
			Dimension = row;
			Size = (row*(row+1))/2;
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
	
	~LowerTringulerMat ()
	{
		delete []A;
		A = nullptr;
	}
};


int LowerTringulerMat::index_rm (int row, int col)
{
	int result = -1;
	if(row >= col)
	{
		int cache = ((row-1)*(row))/2;
		result = (cache +(col-1));
	}
	return result;
}

int LowerTringulerMat::index_cm (int row,int col)
{
	int result = -1;
	
	if(row >= col)
	{
		//formula = eq1 - eq2 + eq2;
		
		int eq1 = Dimension*(col-1);
		int eq2 = ((col-2)*(col-1))/2;
		int eq3 = row-col;
		
		result = eq1 - eq2 + eq3;
		
		
		
		
		// program
		/*
		result = 0;
		int cache = Dimension;
		for(int i = col; i>1; i--)
		{
			result += cache;
			cache--;
		}
		result += (row - col);
		*/
	}
	
	return result;
	
}


int LowerTringulerMat::get (int row, int col)
{
	int index = index_cm(row, col);
	return ((index != -1) ? A[index] : 0);
}

void LowerTringulerMat::set(int row,int col,int val)
{
	int index = index_cm(row, col);
	if(index != -1)
	{
		A[index] = val;
	}
}

void LowerTringulerMat::displayMat ()
{
	for(int i=1;i <= Dimension;i++)
	{
		for(int j=1;j <= Dimension;j++)
		{
			int val = (i >= j ? get(i,j) : 0);
			print(val);
		}
		print();
	}
}

void LowerTringulerMat::display ()
{
	for(int i=0;i < Size;i++)
	{
		print(A[i]);
	}
}


#endif
