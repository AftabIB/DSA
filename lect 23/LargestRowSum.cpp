#include<iostream>
using namespace std;

int LargestRowSum(int arr[][3],int row,int col)
{
	int maxi = INT_MIN;
	int Rowindex = -1;
	
	for(int row=0;row<3;row++)
	{
		int sum = 0;
		for(int col=0;col<3;col++)
		{
			sum = sum + arr[row][col];
		}
		if(sum > maxi)
		{
			maxi = sum;
			Rowindex = row;
		}
	}
	
	cout<<"Largest element : "<<maxi<<endl;
	return Rowindex; 
}
int main()
{
	int arr[3][3];
	cout<<"Enter the array Elements : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>> arr[i][j];
		}
	}
	
	cout<<"Array elements are : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int ans = LargestRowSum(arr,3,3);
	cout<<"Largest element is at Row index "<< ans <<endl;
	
}
