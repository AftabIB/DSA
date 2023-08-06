#include<iostream>
using namespace std;

getMax(int arr[], int n)
{
	int maxi;
//	max = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		maxi = max(maxi,arr[i]);
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
	} 
	return maxi;
}

getMin(int arr[], int n)
{
	int min;
	min = INT_MAX;
	
	for(int i=0;i<n;i++)
	{
//		mini = min(mini,arr[i]);
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
	cout<<"Enter the Size of Array : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the Array Elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Maximum element from array : "<<getMax(arr,size)<<endl;
	cout<<"Minimum element from array : "<<getMin(arr,size)<<endl;
}
