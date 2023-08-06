#include<iostream>
using namespace std;

long power(int a,int b)
{
	long ans = 1;
	for(int i = 1;i<=b;i++)
	{
		ans = ans * a;
	}
	return ans;
}

int main()
{
	int a;
	cout<<"Enter no of times you want to perform function : ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		long a,b;
		cout<<"\nEnter 1st value : ";
		cin>>a;
		cout<<"Enter 2nd value : ";
		cin>>b;
		int ans = power(a,b);
		cout<<"Answer : "<<ans<<endl;
	}
}
