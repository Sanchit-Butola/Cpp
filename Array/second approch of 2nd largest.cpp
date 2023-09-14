//2nd approch for finding the 2nd largst element 
#include<iostream>
using namespace std;
int SecondLargest(int arr[],int size)
{
	int firstMax = arr[0];
	int secondMax = arr[0];
	for(int i = 0; i<size;i++)
	{
		if(arr[i]>firstMax)
		{
		
		secondMax = firstMax;
		firstMax = arr[i];
	}
	else if(arr[i]>secondMax && arr[i]!=firstMax)
	{
		secondMax = arr[i];
	}
}
return secondMax;
}
int main()
{
	int arr[10] = {1,3,114,5,67,5,3,5,3,5};
	cout<<"2nd max of the given arry is "<<SecondLargest(arr,10);
	
}
