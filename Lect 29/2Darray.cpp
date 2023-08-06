#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int** arr1 = new int*[n];
	
	for(int i=0;i<n;i++)
	{
		arr1[i] = new int[n];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
}
