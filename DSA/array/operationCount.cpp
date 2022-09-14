#include <iostream>
using namespace std;

int opCount (int *num, int sizeOfNum)
{
	if(sizeOfNum == 0) 
		return 0;
	if(sizeOfNum == 1)
		return 1;
	
	int opCnt, minNum;
	opCnt=0;
	minNum = 99999999;
	
	int i,j,k;
	bool flag;

	for(i=0;i<sizeOfNum;i++)
	{
		flag = false;
		
		for(k=0;k<sizeOfNum;k++)
		{
			if(num[k] != 0 && minNum>num[k])
			{
				minNum=min(minNum,num[k]);
			}
		}
		cout<<minNum<<' ';
		
		for(j=0;j<sizeOfNum;j++)
		{
			if(num[j] > 0)
			{
				///cout<<' '<<num[j]<<' '<<minNum<<'\n';
				num[j] -= minNum;
				flag = true;
			}
			cout<<num[j]<<' ';
		}
		cout << endl<<endl;
		if(flag)
		{
			opCnt++;
			flag=false;
		}
	}
	
	
	return opCnt;	
}
int main ()
{
	int sizeOfNum = 5;
	int nums[] = {1,5,0,5,3};
	
	int op = opCount(nums,sizeOfNum);
	
	cout << op << '\n';
	///cout<<min(6,8);
	return 0;	
}
