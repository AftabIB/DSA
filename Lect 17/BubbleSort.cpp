#include<iostream>
using namespace std;

void bubblesort(int arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main()
{
	int size = 5;
	int arr[size] = {5,9,6,4,1};
	bubblesort(arr,size);
}
