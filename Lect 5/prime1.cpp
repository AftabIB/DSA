#include<iostream>
using namespace std;
int main()
{
	int n;
	bool isPrime = 1;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%2==0)
		{
			isPrime = 0;
			break;
		}
	}
	
	if(isPrime == 0)
	{
		cout<<"It is no a prime number"<<endl;
	}
	else
	{
		cout<<"It is a prime number"<<endl;
	}
}
