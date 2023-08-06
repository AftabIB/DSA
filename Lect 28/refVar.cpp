#include<iostream>

using namespace std;

int main()
{
	int i = 19;
	cout<<i<<endl;
	
	int& j = i;	//Reference Variable
	
	j++;
	cout<<j<<endl;
	
	cout<<&i<<" "<<&j<<endl;
	
}
