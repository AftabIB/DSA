#include<iostream>

using namespace std;

int main()
{
	int n; 
	cin>>n;
	
	int sum = 0;
	int i = 1;
	
	while(i<=n)
	{
		cout<<i<<" ";
		if(i % 2 == 0)
		{
			sum = sum + i;
		}
		i = i + 1;	
	}
	cout<<endl;
	cout<<sum;
	return 0;

//	if(n%2!=0)
//	{
//		cout<<n<<" is prime number";
//	}
//	else
//	{
//		cout<<n<<" is no a prime number";
//	}
}
