#include<iostream>
using namespace std;

inline int getMax(int& a,int& b)
{
	return (a>b) ? a : b;	//single line body inline function
}

int main()
{
	int a = 2;
	int b = 4;
	int ans = 0;
	
	ans = getMax(a,b);
	cout<< ans <<endl;
	
	a = a + 5;
	b = b + 1;
	
	ans = getMax(a,b);
	cout<< ans <<endl;
	
	return 0;
}
