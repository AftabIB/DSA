#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start)/2;
	int ans = -1;
	
	while(start <= end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			end = mid - 1; 
		}
		else if(key > arr[mid])
		{
			start = mid + 1;
		}
		else if(key < arr[mid])
		{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return ans;
}

int lastocc(int arr[],int size,int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start)/2;
	int ans = -1;
	
	while(start <= end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			start = mid + 1; 
		}
		else if(key > arr[mid])
		{
			start = mid + 1;
		}
		else if(key < arr[mid])
		{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return ans;
}

totalocc(int arr[],int size, int )
{
	
}
int main()
{
    
	int arr[5] = {1,2,3,3,5};
	cout<<"First occurence : "<<firstocc(arr,5,3)<<endl;
	cout<<"Last occurence : "<<lastocc(arr,5,3)<<endl;
}
