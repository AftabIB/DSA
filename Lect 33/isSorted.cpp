#include<iostream>
using namespace std;

int isSorted(int *arr,int size)
{
	if(size == 0 || size == 1)
	{
		return true;
	}
	
	if(arr[0] > arr[1])
	{
		return false;
	}
	else
	{
		int ans = isSorted(arr+1,size-1);
		return ans;
	}
}
int main()
{
	int size = 5;
	int arr[5] = {2,4,5,6,7};
	int ans = isSorted(arr,size);
	if(ans)
	{
		cout<<"Array is sorted "<<endl;
	}
	else
	{
		cout<<"Array is not sorted "<<endl;
	}
}
