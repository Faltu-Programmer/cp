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
/*
bool search (char* arg, int key)
{
	int l = 
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