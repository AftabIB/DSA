#include<iostream>
using namespace std;
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	int n = 5;
	int start;
	int end = n - 1;
	
	while(end>start)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	print(arr,n);
	return 0;
}
