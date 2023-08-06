#include<iostream>
using namespace std;
int print(int *arr,int size)
{
	cout<<"Size of the array : "<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
}
int linearSearch(int *arr,int n,int key)
{
	print(arr,n);
	if(n == 0)
	{
		return 0;
	}
	
	if(arr[0]==key)
	{
		return true;
	}
	else
	{
		bool remain = linearSearch(arr+1,n-1,key);
		return remain;
	}
}
int main()
{
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
	
	int ans = linearSearch(arr,n,key);
	if(ans) 
	{
		cout<<"Key Found"<<endl;
	}
	else
	{
		cout<<"Key not Found"<<endl;
	}
}
