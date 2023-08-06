#include<iostream>
using namespace std;

int fact(int n)
{
	if(n == 0)			//Base case
		return 1;
	
	return n * fact(n-1);	//recursive relation
}

int main()
{
	int n;
	cin>>n;
	
	int ans = fact(n);
	cout<<"Factorial of "<<n<<" : "<<ans<<endl;
}
