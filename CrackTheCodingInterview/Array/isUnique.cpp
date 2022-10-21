#include <iostream>
using namespace std;

int stringLength(string &arg)
{
	int size = 0;
	while(arg[size] != '\0')
	{
		++size;
	}
	return size;
}

void sort_(string &str) // TC => O(n2).
{
	int sz = stringLength(str);
	for(int i = 0; i < sz-1; i++)
	{
		for(int j = i+1; j < sz; j++)
		{
			if(str[i] < str[j])
			{
				char ch = str[i];
				str[i] = str[j];
				str[j] = ch;
			}
		}
	}
}

bool isUnique (string &str)
{
	if(str == "" or str == " ")	
		return false;
	
	
	sort_(str);
	int size = stringLength(str)-1;
	
	for(int i=0; i < size; i++)
	{
		if(str[i] == str[i+1])
		{
			return false;	
		}
	}
	return true;
}



int main ()
{
	string str = " ";
	
	if(isUnique(str))
	{
		cout << "str is Unique...\n";
	}
	else
	{
		cout << "str isn't Unique...\n";
	}
	

	return 0;	
}
