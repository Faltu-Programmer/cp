<<<<<<< HEAD
﻿#include <iostream>
void print (int val)
{
	std::cout << val << " ";
	return;
=======
﻿#ifndef Print_H
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
>>>>>>> working
}

void print (int a, int b)
{
	std::cout << a << " " << b << "\n";
<<<<<<< HEAD
	return;
=======
>>>>>>> working
}

void print (char* massage, int b)
{
	std::cout << massage << " " << b << "\n";
<<<<<<< HEAD
	return;
=======
}

void print (char ch)
{
	std::cout << ch << "\n";
>>>>>>> working
}

void print (char* massage)
{
	std::cout << massage << "\n";
<<<<<<< HEAD
	return;
}
=======
}

>>>>>>> working
void print (int* arr, int length)
{
	for(int i=0;i<length;i++)
	{
<<<<<<< HEAD
		std::cout << arr[i] << " ";
	}
	return;
}
=======
		print(arr[i]);
	}
	print();
}
#endif
>>>>>>> working
