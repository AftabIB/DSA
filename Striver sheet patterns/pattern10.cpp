#include<iostream>

using namespace std;

void pattern1(int n)
{
	for(int i=1;i<=2*n-1;i++)
	{
		int stars = i;
		if(i>n)
		{
			stars = 2*n-i;
		}
		for(int j=1;j<=stars;j++)
		{
			cout<<"*";
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
