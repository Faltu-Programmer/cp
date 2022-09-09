#include <iostream>
#include "sorted/printPairSumK.cpp"
using namespace std;

int main ()
{
	int m=7,n=5;
	/*
	int a[m];
	for(int i=0;i<m;i++)
		a[i] = i+1;
	
	int b[n];
	for(int i=0;i<n;i++)
		b[i] = i+2;
	*/
	int a[] = {6,8,9,10,11,15,16,19,20,21,24,25};
	print(a,12);
	std::cout<<endl;
	printPairSumK(a,12,29);
	/*
	for(int i=0;i<(m+n);i++)
		cout << c[i] << " ";
	*/

	
	return 0;	
}
