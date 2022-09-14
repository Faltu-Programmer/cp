#include <iostream>

#include "ToeplitzMat.cpp" 
//#include "../helpers/print.cpp"

using namespace std;



int main ()
{
	int n = 5;
	ToeplitzMat tm (n);
	
	int k = 1;
	/*
	for(int i=1;i <= n;i++)
	{
		for(int j=1;j <= n;j++)
		{
			//cout << tm.index_rm(i,j) << " ";
			int x;
			cin >> x;
			tm.set(i,j, x);
		}
		k++;
		cout << "\n";
	}
	*/
	tm.autoFill();
	
	tm.displayMat();
	cout << "\n";
	
	tm.display();
	
	
	return 0;
}
