#ifndef ToeplitzMat_H
	#define ToeplitzMat_H

#include "../helpers/print.cpp"

class ToeplitzMat
{
private:
	int* A;
	int Dimension;
	int Size;
	
	
public:
	ToeplitzMat()
	{
		A = nullptr;
		Dimension = Size = 0;
	}
	ToeplitzMat(int s):ToeplitzMat(s,s)
	{
	}
	ToeplitzMat (int row, int col)
	{
		if(row == col and row > 0)
		{
			Dimension = row;
			Size = (2*Dimension - 1);
			A = new int[Size];
		}
	}
	
	// row major indexing
	int index_rm (int, int);
	// column major indexing
	int index_cm (int, int);
	void autoFill ();
	int get (int, int);
	void set (int, int, int);
	void displayMat ();
	void display ();
	
	~ToeplitzMat ()
	{
		delete []A;
		A = nullptr;
	}
	
};

void ToeplitzMat::autoFill ()
{
	for(int i = 0; i <  Size; i++)
	{
		A[i] = i+1;
	}
}

int ToeplitzMat::index_rm (int row, int col)
{
	int res = -1;
	
	if(row <= col)
	{
		res = col-row;
	}
	else if(row > col)
	{
		res = Dimension + row-col-1;
	}
	return res;
}

int ToeplitzMat::index_cm (int row,int col)
{
	int res = -1;
	
	
	
	return res;
}


int ToeplitzMat::get (int row, int col)
{
	int index = index_rm(row, col);
	return ((index != -1) ? A[index] : 0);
}

void ToeplitzMat::set(int row,int col,int val)
{
	int index = index_rm(row, col);
	if(index != -1)
	{
		A[index] = val;
	}
}

void ToeplitzMat::displayMat ()
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

void ToeplitzMat::display ()
{
	for(int i=0;i < Size;i++)
	{
		print(A[i]);
	}
}


#endif
