#include<iostream>
using namespace std;
void print3()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		int count=1;
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			for(int j=1;j<(n-i+1);j++)
			{
				cout<<j;
//				cout<<count;
				cout<<" ";
//				count++;
			}
			cout<<endl;
		}
	}
}

int main()
{
	print3();
}
