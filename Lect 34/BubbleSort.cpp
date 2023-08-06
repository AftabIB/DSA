//#include<iostream>
//using namespace std;
//void bubbleSort(int arr[],int size)
//{
//	if(size == 0 || size == 1)
//	{
//		return;
//	}
//	
//	for(int i=0;i<size-1;i++)
//	{
//		if(arr[i] > arr[i+1])
//		{
//			swap(arr[i],arr[i+1]);
//		}	
//	}
//	bubbleSort(arr,size-1);
//}
//int main()
//{
//	int arr[5] = {6,3,7,2,9};
//	int size = 5;
//	bubbleSort(arr,size);
//	cout<<"Sorted Array : ";
//	for(int i=0;i<size;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}




#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size)
{
	if(size == 0 || size == 1)
		return;
	
	for(int i=0;i<size-1;i++)
	{
		if(arr[i] > arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
	}
	
	bubbleSort(arr, size-1);
}
int main()
{
	int arr[5] = {3,2,4,1,5};
	int size = 5;
	bubbleSort(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}
































