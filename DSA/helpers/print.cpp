#ifndef Print_H
	#define Print_H

#include <iostream>

void print ()
{
	std::cout << "\n";
}

void print (int val)
{
	std::cout << val << " ";
}
void printMat (int val)
{
	std::cout << val << " ";
}

void print (int a, int b)
{
	std::cout << a << " " << b << "\n";
}

void print (char* massage, int b)
{
	std::cout << massage << " " << b << "\n";
}

void print (char ch)
{
	std::cout << ch << "\n";
}

void print (char* massage)
{
	std::cout << massage << "\n";
}

void print (int* arr, int length)
{
	for(int i=0;i<length;i++)
	{
		print(arr[i]);
	}
	print();
}
#endif