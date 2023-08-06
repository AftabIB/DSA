#include<iostream>
using namespace std;

int invertCount(int *arr,int n)
{
	int int_cnt = 0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				int_cnt++;	
			}	
		}	
	}	
	return int_cnt;
}

int main()
{
	int arr[] = { 1, 20, 6, 4, 5 };
	int n = 5;
	cout<<"Invertion count : "<<invertCount(arr,n)<<endl;
	return 0;
}
