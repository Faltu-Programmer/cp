#include <iostream>
using namespace std;

int length(char* arg)
{
	int size = 0;
	while(*(arg+size) != '\0')
	{
		++size;
	}
	return size;
}

int length(string arg)
{
	int size = 0;
	while(arg[size] != '\0')
	{
		++size;
	}
	return size;
}