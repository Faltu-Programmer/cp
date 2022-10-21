#include "stringLength.cpp"

bool isEqual (char a, char b)
{
	return (a == b);
}

bool isEqual (char* a, char* b)
{
	int sa, sb;
	sa = stringLength(a);
	sb = stringLength(b);
	
	if(sa != sb) return false;
	
	bool flag = true;
	
	for(int i=0; i<sa; i++)
	{
		if(!isEqual(a[i], b[i]))
		{
			flag = false;
			break;
		}
	}
	return flag;
}
