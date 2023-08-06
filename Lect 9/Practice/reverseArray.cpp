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

int reverse(int arr[],int size)
{
	int start = 0;
	int end = size - 1 ;
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
	cout<<"Enter size : "<<endl;
	cin>>size;
	cout<<"Enter elements : "<<endl;
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,size);
	printArray(arr,size);
}
