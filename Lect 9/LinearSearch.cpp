#include<iostream>
using namespace std;


int Search(int arr[], int size, int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == key)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int size,key;
	cout<<"Enter Size : "<<endl;
	cin>>size;
	int arr[100];
	cout<<"Enter Array elements : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Key you want to find : "<<endl;
	cin>>key;
	Search(arr,size,key);
	if(1)
	{
		cout<<"Key is present "<<endl;
	}
	else
	{
		cout<<"Key is not present "<<endl;
	}
}
