#include<iostream>
using namespace std;

int printArray(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"Array Printed"<<endl;;
}
int main()
{
	int arr3[15] = {2,1};
	int arr1[] = {1,2,5,8,2};
	printArray(arr1,5);
	int arr2 = sizeof(arr3)/sizeof(int);
	cout<<"Size is "<<arr2;
}
