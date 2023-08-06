#include<iostream>
using namespace std;

bool isPrime(int a)
{
	bool isPrime = 1;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	if(isPrime(n))
	{
		cout<<"It is a prime number "<<endl;
	}
	else
	{
		cout<<"It is not a prime number"<<endl;
	}
}
