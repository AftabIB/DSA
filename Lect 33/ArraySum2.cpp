#include<iostream>
using namespace std;
int getSum(int *arr,int size)
{
	if(size == 0)
	{
		return 0;
	}
	if(size == 1)
	{
		arr[0];
	}
	
	int remain = getSum(arr+1,size-1);
	int sum = arr[0] + remain;
	return sum;
}
int main()
{
	int size;
	cout<<"Enter the size : "<<endl;
	cin>>size;
	
	int* arr = new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	int ans = getSum(arr,size);
	cout<< "\nSize is : "<< ans <<endl;
	
}
