#include <iostream>
using namespace std;

int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int n = 10;

int bS (int key)
	{
		int low=0, high = n-1, mid;
		
		while (low <= high)
		{
			mid = (low+high)/2;
			
			if(key < arr[mid])
				high = mid-1;
			if(key > arr[mid])
				low = mid+1;
			if (key == arr[mid])
				return mid;
		}
		return -1;
	}
int r_bS (int l,int h,int arr[],int key)
	{
		int mid = (l+h)/2;
		if(l>h)
			return -1;
		
		if(key == arr[mid])
			return mid;
		if(key < arr[mid])
			return r_bS(l,mid-1,arr,key);
		if(key > arr[mid])
			return r_bS(mid+1,h,arr,key);
	}

int main ()
{
	cout << "bS " << bS(7) << "\n";
	cout << "r_bS " << r_bS(0,n-1,arr,7) << "\n";

	return 0;	
}
