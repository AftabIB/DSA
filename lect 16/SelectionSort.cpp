#include<iostream>
using namespace std;

int SelectionSort(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int minElement = i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j] < arr[minElement])
			{
				minElement = j;
			}
		}	
		swap(arr[minElement],arr[i]);
	}
	return 1;
}

int main()
{
	int size = 5;
	int arr[size] = {3,8,1,10,43};
	SelectionSort(arr,size);
}
