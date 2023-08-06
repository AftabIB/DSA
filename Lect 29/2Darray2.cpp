#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"Enter No. of Rows : "<<endl;
	cin>>row;
	int col;
	cout<<"\nEnter No. of Columns : "<<endl;
	cin>>col;
	
	int** arr1 = new int*[row];
	for(int i=0;i<row;i++)
	{
		arr1[i] = new int[col];
	}
	
	//Array input 
	cout<<"\nEnter Array elements : "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<endl;
	
	//Array output
	cout<<"Array elements are : "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//releasing memory
	for(int i=0;i<row;i++)
	{
		delete []arr1[i];
	}
	
	delete []arr1;
}


