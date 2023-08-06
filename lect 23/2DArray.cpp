#include<iostream>
using namespace std;

int main()
{
	int s1,s2;
	cout<<"Enter Number of rows : "<<endl;
	cin>>s1;
	cout<<"Enter Number of columns : "<<endl;
	cin>>s2;
	cout<<"Enter elements : "<<endl;
	
	//row wise input
	int arr[s1][s2];
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Array Elements are : "<<endl;
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	/*column wise input	
	int arr[s1][s2];
	for(int j=0;j<s2;j++)
	{
		for(int i=0;i<s1;i++)
		{
			cin>>arr[j][i];
		}
	}
	
	cout<<"Array Elements are : "<<endl;
	for(int j=0;j<s2;j++)
	{
		for(int i=0;i<s1;i++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}*/
	
	return 0;
}
