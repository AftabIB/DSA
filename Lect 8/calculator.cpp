#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the First number : "<<endl;
	cin>>a;
	cout<<"Enter the Second number : "<<endl;
	cin>>b;
	
	char op;
	cout<<"Enter the Operation : "<<endl;
	cin>>op;
	
	switch(op)
	{
		case '+' : cout<<"\nResult : \n"<<a<<" + "<<b<<" = "<<(a+b);
		break;
		
		case '-' : cout<<"\nResult : \n"<<a<<" - "<<b<<" = "<<(a-b);
		break;
		
		case '/' : cout<<"\nResult : \n"<<a<<" / "<<b<<" = "<<(a/b);
		break;
		
		case '*' : cout<<"\nResult : \n"<<a<<" * "<<b<<" = "<<(a*b);
		break;
		
		case '%' : cout<<"\nResult : \n"<<a<<" % "<<b<<" = "<<(a%b);
		break;
		
		default: cout<<"\n Enter the valid Operation"<<endl;
	} 
}
