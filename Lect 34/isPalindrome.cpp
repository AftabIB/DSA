//#include<iostream>
//using namespace std;
//
//int isPalindrome(string& str,int i, int j)
//{
//	if(i>j)
//		return true;
//	
//	if(str[i] != str[j])
//		return false;
//		
//	isPalindrome(str,i+1,j-1);
//}
//
//int main()
//{
//	string str = "abvcba";
//	int n = str.length();
//	int ans = isPalindrome(str,0,n-1);
//	if(ans)
//	{
//		cout<<"It is Palindrome"<<endl;
//	}
//	else
//	{
//		cout<<"It is not a Palindrome"<<endl;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//


#include<iostream>
using namespace std;

int isPalindrome(string& str,int i,int j)
{
	if(i>j)
		return true;
	
	if(str[i] != str[j])
		return false;
	
	isPalindrome(str,i+1,j-1);	
}


int main()
{
	string str = "abcxba";
	int n = str.length();
	int ans = isPalindrome(str,0,n-1);
	if(ans)
	{
		cout<<"It is Palindrome";
	}
	else
	{
		cout<<"It is not a Palindrome";
	}
	return 0;
}

































