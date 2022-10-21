#ifndef UpperTringulerMat_H
	#define UpperTringulerMat_H

#include "../helpers/print.cpp"

class UpperTringulerMat
{
private:
	int* A;
	int Dimension;
	int Size;

public:
	UpperTringulerMat()
	{
		A = nullptr;
		Dimension = Size = 0;
	}
	UpperTringulerMat(int s):UpperTringulerMat(s,s)
	{
	}
	UpperTringulerMat (int row, int col)
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
	
	~UpperTringulerMat ()
	{
		delete []A;
		A = nullptr;
	}
};


int UpperTringulerMat::index_rm (int row, int col)
{
	int res = -1;
	if(row <= col)
	{
		int eq1,eq2,eq3;
		
		eq1 = Dimension * (row - 1);
		eq2 = ((row-2)*(row-1))/2;
		eq3 = col-row;
		
		// formula = eq1 - eq2 + eq3
		res = (eq1 - eq2 + eq3);
	}
	
	return res;
}

int UpperTringulerMat::index_cm (int row,int col)
{
	int res = -1;
	if(row <= col)
	{
		int eq1,eq2;
		
		eq1 = (col * (col-1))/2;
		eq2 = row - 1;
		
		// formula = eq1 + eq2 
		res = eq1 + eq2;
	}
	
	return res;
}


int UpperTringulerMat::get (int row, int col)
{
	int index = index_cm(row, col);
	return ((index != -1) ? A[index] : 0);
}

void UpperTringulerMat::set(int row,int col,int val)
{
	int index = index_cm(row, col);
	if(index != -1)
	{
		A[index] = val;
	}
}

void UpperTringulerMat::displayMat ()
{
	for(int i=1;i <= Dimension;i++)
	{
		for(int j=1;j <= Dimension;j++)
		{
			int val = (i <= j ? get(i,j) : 0);
			print(val);
		}
		print();
	}
}

void UpperTringulerMat::display ()
{
	for(int i=0;i < Size;i++)
	{
		print(A[i]);
	}
}


#endif
