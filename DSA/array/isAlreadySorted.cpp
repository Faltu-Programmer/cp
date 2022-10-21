/*
#include <iostream>
using namespace std;
*/
bool isAlreadySorted (int* a, int length)
{
	// here we iterate only to till length-2
	length -= 1;
	for(int i=0;i < length; i++)
	{
		if(a[i] > a[i+1])
			return false;	
	}
	return true;
}
/*

int main ()
{
	int n = 8;
	int a[8] = {1,3,6,8,10,13,17,23};
	if(isAlreadySorted(a,n))
		cout << "sorted\n";
	else
		cout << "unSorted\n";
	
	return 0;	
}
*/