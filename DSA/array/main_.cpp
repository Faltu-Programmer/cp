﻿#include <iostream>
//#include <array>
#include "../helpers/length.cpp"
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
	int arr[] = {6,8,9,10,11,15,16,19,20,21,24,25};
	
	std::cout<<end(arr)-begin(arr)<<endl;
	std::cout<<length(arr);
	/*
	for(int i=0;i<(m+n);i++)
		cout << c[i] << " ";
	*/

	
	return 0;	
}
