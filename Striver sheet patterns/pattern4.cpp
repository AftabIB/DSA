#include<iostream>

using namespace std;

void pattern1(int n)
{
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
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
