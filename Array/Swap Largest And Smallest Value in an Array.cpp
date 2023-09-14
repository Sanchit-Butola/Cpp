//swap the largest and smallest value in an array
#include<iostream>
using namespace std;
int findSmallest(int arr[],int size)
{
	int min = arr[0];
	int Spos = 0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			Spos = i;
		}
	}
	return Spos;
}
int findLargest(int arr[],int size)
{
	int max=arr[0];
	int Lpos = 0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			Lpos=i;
		}
	}
	return Lpos;
}
int SwapLargestSmallest(int arr[],int pos1,int pos2)
{
	int temp = arr[pos1];
	arr[pos1]=arr[pos2];
    arr[pos2]=temp; 	
}
int main()
{
	int arr[10]={2,35,7,8,97,58,4,8,7,32};
	cout<<findLargest(arr,10)<<endl;
	cout<<findSmallest(arr,10)<<endl;
	
	int pos1 = findLargest(arr,10);
	int pos2 = findSmallest(arr,10);
	SwapLargestSmallest(arr,pos1,pos2);
	cout<<"THE ELEMENTS OF THE ARRAY NOW ARE :"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
}
