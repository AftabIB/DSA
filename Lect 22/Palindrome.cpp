#include<iostream>
using namespace std;

char toLowercase(char ch)
{
	if(ch >='a' && ch <='z')
	{
		return ch;
	}
	else
	{
		char temp = ch - 'A' + 'a';
		return temp; 
	}
}

int reverse(char ch[],int n)
{
	int start = 0;
	int end = n - 1;
	while(start<end)
	{
		swap(ch[start],ch[end]);
		start++;
		end--;
	}
	return 0;
}

int getLength(char ch[])
{
	int count = 0;
	for(int i=0; ch[i] != '\0';i++)
	{
		count++;
	}
	return count;
}

bool isPalindrome(char ch[],int n)
{
	int s = 0;
	int e = n - 1;
	while(e>s)
	{
		//if(ch[s] != ch[e])
		if(toLowercase(ch[s]) != toLowercase(ch[e]))
		{
			cout<<"It is not a palindrome"<<endl;
			return 0;
		}
		else
		{
			s++;
			e--;
		}
	}
	cout<<"It is palindrome"<<endl;
	return 1;
}

int main()
{
	char name[20];
	cout<<"Enter name : "<<endl;
	cin>>name;
	
	cout<<"Your name is ";
	cout<< name << endl;
	
	int len = getLength(name);
	cout<<"Length : "<<len<<endl;
	
	int rev = reverse(name,len);
	cout<<"Reverse string name is "<<endl;
	cout<<name<<endl;
	cout<<isPalindrome(name,len);
	cout<<"\nTo lower case : "<<toLowercase('a')<<endl;
	cout<<"To lower case : "<<toLowercase('B')<<endl;;	
	return 0;
}
