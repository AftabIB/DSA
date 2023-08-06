#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	cout<<"Address of num : "<<&num;
	
	int *ptr = &num;
	cout<<"\nValue of num : "<<*ptr;
	cout<<"\nAddress of ptr : "<<ptr<<endl;
	
	double num2;
	cin>>num2;
	cout<<"Address of num2 : "<<&num2;
	
	double *ptr2 = &num2;
	cout<<"\nValue of num2 : "<<*ptr2;
	cout<<"\nAddress of ptr2 : "<<ptr2;
	(*ptr2)++;
	cout<<"\nValue of num2 : "<<*ptr2;
	
	cout<<"\nSize of num : "<<sizeof(num);
	cout<<"\nSize of pointer : "<<sizeof(ptr)<<endl;
	
	double *q = ptr2;
	cout<<*q;
}
