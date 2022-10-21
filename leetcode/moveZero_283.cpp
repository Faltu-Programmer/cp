#include <iostream>
using namespace std;

void display (int *Arr, int n)
{
	for(int i=0; i<n; i++)
	{
		std::cout << Arr[i] << " ";
	}
	std::cout <<'\n';
}


/// more efficient ....
void moveZeroes(int *Arr, int n) 
{       
    if(n==1)
        return;
        
    int j = 0;
    for(int i=0; i < n; i++)
    {
        if(Arr[i] != 0)
        {
             Arr[j++] = Arr[i]; 
        }
    }
        
    while(j < n) Arr[j++] = 0;
}


void moveZero(int *Arr, int n)
{
	for(int i=0, j = 1; i<n-1 and j<n;)
	{
		if(Arr[i] != 0)
		{
			i++;
			j = i+1;
		}
		else if(Arr[j] == 0)
		{
			j++;
		}
		else
		{
			int tmp = Arr[i];
			Arr[i++] = Arr[j];
			Arr[j++] = tmp;
		}
	}
}



int main ()
{
	int n = 15;
	int *ar = new int[n];
	
	for(int i=0; i<n; i++)
	{
		ar[i] = 1;
	}
	
	ar[6] = 0;
	ar[2] = 0;
	ar[7] = 0;
	ar[10] = 0;
	ar[13] = 0;
	ar[14] = 0;
	
	
	display(ar, n);
	//moveZero(ar, n);
	moveZeroes(ar, n);
	display(ar, n);

	return 0;
}
