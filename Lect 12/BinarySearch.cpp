#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
	int start = 0;
	int end = size - 1;
	
	int mid = (start+end)/2;
	
	while(end>=start)
	{
		if(arr[mid]==key)
		{
			return mid;	
		}	
		
		if(key>arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = (start+end)/2;
	}
	return -1;
}
int main()
{
	int size,key;
	cout<<"Enter size : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter the Elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter key : "<<endl;
	cin>>key;
	int index = BinarySearch(arr,size,key);
	cout<<"Key "<<key<<" found at index : "<<index<<endl;
}

