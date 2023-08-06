#include<iostream>
using namespace std;

bool isPresent(int arr [][3],int key,int row,int col)
{
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			if(arr[row][col] == key)
			{
				return 1;
			}
		}
	}
	return 0;
}

void getRowSum(int arr[][3],int i,int j)
{
	cout<<"\nSum of Row is : "<<endl;
	for(int i=0;i<3;i++)
	{
		int sum = 0;
		for(int j=0;j<3;j++)
		{
			sum += arr[i][j];
		}
	cout<<sum<<endl;
	}
	cout<<endl;
}

void getColSum(int arr[][3],int i,int j)
{
	cout<<"Sum of Column is : "<<endl;
	for(int j=0;j<3;j++)
	{
		int sum = 0;
		for(int i=0;i<3;i++)
		{
			sum += arr[i][j];
		}
	cout<<sum<<endl;
	}
	cout<<endl;
}
int main()
{
//	int s1,s2,key;
//	cout<<"Enter Row size : "<<endl;
//	cin>>s1;
//	cout<<"Enter Column size : "<<endl;
//	cin>>s2;
//	cout<<"Enter elements : "<<endl;
	int arr[3][3];
	
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
	
//	int key;
//	cout<<"Enter the element to search : "<<endl;
//	cin>>key;
//	bool isFound = isPresent(arr,key,2,2);
//	
//	if(isFound)
//	{
//		cout<<"Found"<<endl;
//	}
//	else
//	{
//		cout<<"Not Found"<<endl;
//	}

	getRowSum(arr,3,3);
	getColSum(arr,3,3);
	
	return 0;
}
