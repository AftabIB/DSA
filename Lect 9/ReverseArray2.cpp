#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
	cout<<"Array elements are : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

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

int main()
{
	int size;
	cout<<"Enter the size : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,size);
	printArray(arr,size);
}
