#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
	cout<<"Reverse of Array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

sumArray(int arr[],int size)
{
	int count = 0;
	for(int i=0;i<size;i++)
	{
		count = count + arr[i];
		arr[i];
	}
	cout<<"\nSum of Array : "<<count<<endl;
}

int main()
{
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	cout<<"Enter elements : "<<endl;
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	printArray(arr,size);
	sumArray(arr,size);
}
