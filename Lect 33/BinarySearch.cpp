#include<iostream>
using namespace std;
void print(int *arr,int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

bool BinarySearch(int *arr,int start,int end,int key)
{
	cout<<endl;
	print(arr,start,end);
	if(start>end)
	{
		return false;
	}
	
	int mid = start + (end - start)/2;	
	
	cout<<"Mid value : "<<arr[mid]<<endl;
	
	if(arr[mid] == key)
	{
		return true;
	}
	
	if(arr[mid] < key)
	{
		return BinarySearch(arr,mid+1,end,key);
	}
	else
	{
		return BinarySearch(arr,start,mid-1,key);
	}
}
int main()
{
//	int size = 6;
//	int arr[6] = {2,4,6,10,14,18};
//	int key = 18;
	int n;
	cout<<"Enter the size : "<<endl;
	cin>>n;
	
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the Key : "<<endl;
	cin>>key;
	
	bool ans = BinarySearch(arr,0,n-1,key);
	if(ans)
	{
		cout<<endl;
		cout<<"Key Found "<<ans<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"Key not Found " <<ans<<endl;
	}
}
