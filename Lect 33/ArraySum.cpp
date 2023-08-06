#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
	if(n == 0 || n == 1)
	{
		return true;
	}
	
	if(arr[0] > arr[1])
	{
		return false;
	}
	
	else
	{
		int sum = 0;
		sum = arr[n - 1] + getSum(arr,n-1);
		return sum;
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
	
	int ans = getSum(arr,n);
	cout<<ans<<endl;
	
	delete []arr;
}
