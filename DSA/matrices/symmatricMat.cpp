#ifndef SymmatricMat_H
	#define SymmatricMat_H
#include "../helpers/print.cpp"

class SymmatricMat
{
private:
	int* A;
	int Dimension;
	int Size;

public:
	SymmatricMat()
	{
		A = nullptr;
		Dimension = Size = 0;
	}
	SymmatricMat(int s):SymmatricMat(s,s)
	{
	}
	SymmatricMat (int row, int col)
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
	int validIndex (int,int);
	int get (int, int);
	void set (int, int, int);
	void displayMat ();
	void display ();
	
	~SymmatricMat ()
	{
		delete []A;
		A = nullptr;
	}
};

int SymmatricMat::validIndex (int i,int j)
{
	return (i >= j?index_rm(i,j): index_rm(j,i));
}

int SymmatricMat::index_rm (int row, int col)
{
	int result = -1;
	if(row >= col)
	{
		int cache = ((row-1)*(row))/2;
		result = (cache +(col-1));
	}
	return result;
}

int SymmatricMat::index_cm (int row,int col)
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


int SymmatricMat::get (int row, int col)
{
	int index = validIndex(row, col);
	return ((index != -1) ? A[index] : 0);
}

void SymmatricMat::set(int row,int col,int val)
{
	int index = validIndex(row, col);
	if(index != -1)
	{
		A[index] = val;
	}
}

void SymmatricMat::displayMat ()
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

void SymmatricMat::display ()
{
	for(int i=0;i < Size;i++)
	{
		print(A[i]);
	}
}


#endif
