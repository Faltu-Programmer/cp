#include <iostream>
#include "search.cpp"
using namespace std;

/*
bool search (int* p, int l, int key)
{
	for(int i=0;i<l;i++)
	{
		if(p[i] == key)
		{
			return true;
		}
	}
	return false;
}
*/
int* union_ (int* a, int m, int* b, int n)
{
	int lim = m+n;
	int* t = new int[lim];
	int cl = 0;
	
	for(int i=0;i<m;i++)
	{
		if(!search(t,cl,a[i]))
			t[cl++] = a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(!search(t,cl,b[i]))
			t[cl++] = b[i];
	}
	
	return t;
	
}



int main ()
{
	int m=7,n=5;
	
	int a[m];
	for(int i=0;i<m;i++)
		a[i] = i+1;
	
	int b[n];
	for(int i=0;i<n;i++)
		b[i] = i+m+1;
	
	int* c = union_ (a,m,b,n);
	
	for(int i=0;i<(m+n);i++)
		cout << c[i] << " ";
	
	return 0;	
}
