char* changeCase (char* str)
{
	int i=0;
	while (str[i] != '\0')
	{
		char buffer = str[i];
		if(buffer >= 65 and buffer <= 90)
		{
			buffer = buffer + 32;
			str[i] = buffer;
		}
		else if(buffer >= 97 and buffer <= 122)
		{
			buffer = buffer - 32;
			str[i] = buffer;
		}
		i++;
	}

	return str;	
}

char* changeToUpperCase (char* str)
{
	int i=0;
	while (str[i] != '\0')
	{
		char buffer = str[i];
		if(buffer >= 97 and buffer <= 122)
		{
			str[i] = str[i]-32;
		}
		i++;
	}

	return str;	
}

char* changeToLowerCase (char* str)
{
	int i=0;
	while (str[i] != '\0')
	{
		char buffer = str[i];
		if(buffer >= 65 and buffer <= 90)
		{
			str[i] = str[i]+32;
		}
		i++;
	}

	return str;	
}
