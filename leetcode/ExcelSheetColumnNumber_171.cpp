/*
Given a string columnTitle that represents the column 
title as appears in an Excel sheet, return its 
corresponding column number.
*/

#include <iostream>
#include <math.h>
using namespace std;

int length(string arg)
{
	int size = 0;
	while(arg[size] != '\0')
	{
		++size;
	}
	return size;
}


int titleToNumber(string str)
{
	int i = length(str)-1;
	int k = 0;
	int res = 0;
	while(i >= 0)
	{
		int base = (str[i--]-64);
		int power = pow(26,k++);
		
		res += (base * power);
	}
	return res;
}






int main ()
{
	string s = "AB";
	cin >> s;
	
	cout << titleToNumber (s);
	
	return 0;
}
