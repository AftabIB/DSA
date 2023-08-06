#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size : "<<endl;
	cin>>size;
	cout<<"Enter Array Elements : "<<endl;
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array Elements are : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";;
	}

	int count = 0;
	
	for(int i=0;i<size;i++)
	{
		count = count + arr[i];
		arr[i]++;
	}
	cout<<"\nAddition of Array elements : "<<count;
}
