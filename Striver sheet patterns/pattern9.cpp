#include<iostream>

using namespace std;

void pattern1(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
		}	
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<n-i;j++)
		{
			cout<<"*"<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		pattern1(n);	
	}
}