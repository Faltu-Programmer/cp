#include <iostream>
void print (int val)
{
	std::cout << val << " ";
	return;
}

void print (int a, int b)
{
	std::cout << a << " " << b << "\n";
	return;
}

void print (char* massage, int b)
{
	std::cout << massage << " " << b << "\n";
	return;
}

void print (char* massage)
{
	std::cout << massage << "\n";
	return;
}
void print (int* arr, int length)
{
	for(int i=0;i<length;i++)
	{
		std::cout << arr[i] << " ";
	}
	return;
}
