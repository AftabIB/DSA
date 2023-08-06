#include<iostream>
using namespace std;

int facto(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++) 
	{
		fact = fact * i;
	}
	return fact;
}
int nCr()
{
	int n,r;
	cout<<"Enter n : "<<endl;
	cin>>n;
	cout<<"Enter r : "<<endl;
	cin>>r;
	
	int num = (facto(n));
	int den = (facto(r)) * (facto(n-r));
	int answer = num/den;
	cout<<"Answer of nCr : "<<answer;
}

int main()
{ 
	nCr();
}
