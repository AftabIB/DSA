#include<iostream>
using namespace std;
int main()
{
	int n = 3;
	char ch = 'A';
	
	switch(ch)
	{
		case 1 : cout<<"First Case"<<endl;
		break;
		
		case 2: cout<<"Second Case"<<endl;
		break;
		
		case 'A': switch(n)
				{
					case 1: cout<<"Value of n is "<< n << endl;
					break;
					case 3: cout<<"Value of char is "<< ch << endl;
					break;
				}
		break;
		
		default: cout<<"Default Case";
		
	}
}
