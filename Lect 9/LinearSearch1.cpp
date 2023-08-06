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

int Lsearch(int arr[],int size, int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
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
	
	cout<<"Enter Key:"<<endl;
	cin>>key;
	bool found = Lsearch(arr,size,key);
	if(found)
	{
		cout<<"Key Found"<<endl;
	}
	else
	{
		cout<<"Key not Found"<<endl;
	}
}
