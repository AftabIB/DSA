#include<iostream>

using namespace std;

int main()
{
	/*int arr[10] = {10,12,14,16,18};
	cout<<"Address of 1st Location : "<<arr;
	cout<<"\nAddress of 1st Location : "<<&arr[0]; 
	cout<<"\nFirst Location value : "<<*arr;
	cout<<"\nValue : "<<*arr + 1;
	cout<<"\nValue : "<<*(arr + 1);
	cout<<"\nValue : "<<*(arr) + 1;
	cout<<"\nValue : "<<arr[2];
	cout<<"\nValue : "<<*(arr + 2);
	cout<<"\nValue : "<<3[arr];
	cout<<"\nValue : "<<*(3+arr);*/
	
	int temp[10] = {10,20,30};
	cout<<sizeof(temp)<<endl;
	cout<<sizeof(*temp)<<endl;
	cout<<sizeof(&temp)<<endl;
	
	//temp = temp + 1;
	int *ptr = &temp[0];
	cout<<"1 -> "<<ptr<<endl;
	ptr = ptr + 1; 
	cout<<"1 -> "<<ptr<<endl;
}
