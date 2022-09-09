void swap (int &arg1, int &arg2)
{
	int tempHolder = arg1;
	arg1 = arg2;
	arg2 = tempHolder;
}

void swap (char &arg1, char &arg2)
{
	char tempHolder = arg1;
	arg1 = arg2;
	arg2 = tempHolder;
}

void swap (char* arg1, char* arg2)
{
	char* tempHolder = arg1;
	arg1 = arg2;
	arg2 = tempHolder;
}