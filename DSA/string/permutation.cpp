#include "../helpers/print.cpp"
#include <iostream>
void prin (int a, int b)
{
	std::cout<<"i"<<a<<"k"<<b<<" --> ";
}
void permutation (char arg[], int k)
{
	static int flag[10] = {0};
	static char result[10];
	if(arg[k] == '\0')
	{
		result[k] = '\0';
		print(result);
		print();
		//printf("%s\n\n",result);
	}
	else
	{
		for(int i=0; arg[i] != '\0'; i++)
		{
			
			prin(i,k);
			if(flag[i] == 0)
			{
				flag[i] = 1;
				result[k] = arg[i];
				print(flag,3);
				permutation(arg, k+1);
				print(flag,3);
				flag[i] = 0;
			}
		}
	}
}
