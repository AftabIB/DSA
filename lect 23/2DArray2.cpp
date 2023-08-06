#include<iostream>
using namespace std;

int main()
{
	int arr[3][3] = {{1,4,8},{2,5,7,},{3,6,9}};
	
//	for(int row=0;row<3;row++)
//	{
//		for(int col=0;col<2;col++)
//		{
//			cin>>arr[row][col];
//		}
//	}
	
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
}
