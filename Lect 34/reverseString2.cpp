#include<iostream>
using namespace std;

void reverseString(string& str,int i)
{
	int n = str.length();
	
	//base case
	if(i>(n+1)/2)
		return;
	
	//processing
	swap(str[i],str[n-1-i]);
	i++;
	
	//recursion relation
	reverseString(str,i+1);
}

int main()
{
	string str = "abcde";
	reverseString(str,0);
	cout<<str<<endl;
}
