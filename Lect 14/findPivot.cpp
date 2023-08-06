#include<iostream>
using namespace std;

int pivotEle(int arr[],int n)
{
	int start = 0;
	int end = n - 1;
	int mid = start + (end  - start)/2;
	
	while(start < end)
	{
		if(arr[mid] >= arr[0])
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = start + (end  - start)/2;
	}
	return start;
}

int main()
{
	int arr[7] = {2,3,10,1,9,10,12};
	cout<<"Pivot Element is at index : "<<pivotEle(arr,7);
}
