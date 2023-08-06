#include<iostream>
using namespace std;

int Min(int arr[],int size)
{
	int min = INT_MAX;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	return min;
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
	cout<<endl;
	cout<<Min(arr,size);
}
