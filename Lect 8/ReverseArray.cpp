#include<iostream>
using namespace std;

int reverse(int arr[],int size)
{
	int start = 0;
	int end = size - 1;

	while(end>start)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[],int size)
{
	cout<<"\nArray Elements are : "<<" ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int size;
	cout<<"Enter the size : "<<endl;
	cin>>size;
	cout<<"Enter array elements : ";
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,size);
	printArray(arr,size);
}
