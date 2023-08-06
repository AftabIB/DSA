#include<iostream>
using namespace std;

void reverse(char name[], int n)
{
	int s = 0;
	int e = n-1;
	while(s<e)
	{
		swap(name[s++],name[e--]);
	}
}
int getLength(char ch[])
{
	int count = 0;
	for(int i=0;ch[i]!='\0';i++)
	{
		count++;	
	}
	return count;
}

int main()
{
	int size;
	cin>>size;
	char ch[size];
	cout<<"Enter the character : "<<endl;
	cin>>ch;
	//ch[3] = '\0';
	int len = getLength(ch);
	cout<<"Your name is "<<ch<<endl;
	//cout<<"Length of char. array : "<<len<<endl;
	reverse(ch,len);
	cout<<ch;
	//cout<<"Reverse of char. array : "<<endl;
}
