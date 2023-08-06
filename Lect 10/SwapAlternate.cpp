#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
	cout<<"\nAlternated array elements are : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void swapAlternate(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}

int main()
{
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the Elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	swapAlternate(arr,size);
	printArray(arr,size);
}
