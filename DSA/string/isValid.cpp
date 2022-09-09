bool isValid (char* arg)
{
	bool flag = true;
	
	for(int i=0; arg[i] != '\0';i++)
	{
		char currData = arg[i];
		bool isUpper, isLower, isNumber;
		
		isUpper = currData >= 65 and currData <= 90;
		isLower = currData >= 97 and currData <=122;
		isNumber = currData >= 48 and currData <= 57;
		if(!(isUpper or isLower or isNumber))
		{
			flag = false;
			break;
		}
	}
	return flag;
}
