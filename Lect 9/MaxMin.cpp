#include<iostream>
using namespace std;

int findMinMax()
{
	int size;
	cout<<"Enter the size of Array : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[j]>arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	cout<<"Elements after sorting array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\nSmallest Element in Array : "<<arr[0]<<endl;
	cout<<"Largest Element in Array : "<<arr[size-1]<<endl;
}

int main()
{
	findMinMax();
}
