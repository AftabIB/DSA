#include<iostream>
using namespace std;
int& update3(int a)
{
	int num = a;
	int& ans = num;
	return ans;
}

void update1(int n)
{
	n++;	
}
void update2(int& n)
{
	n++;	
}
int main()
{
	int n = 9;
	cout<<"Before : "<<n<<endl;
	update3(n);
	cout<<"After : "<<n<<endl;
}
