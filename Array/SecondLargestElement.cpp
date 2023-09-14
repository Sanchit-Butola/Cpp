//to find the second largest element in the array
#include<iostream>
using namespace std;
int FirstLargest(int arr[],int size)
{
int max1 = arr[0];
int pos ;
for(int i=0;i<size;i++)
{
	if(arr[i]>max1)
	{
		max1=arr[i];
		pos = i;
	}
	
}
cout<<max1<<"  largest element  "<<endl;
return pos;
}
void swapLargest(int arr[],int pos1)
{
	int temp = arr[pos1];
	arr[pos1] = arr[0] ;
	arr[0] = temp;
	
}
int main()
{
	int arr[10]={1,22,12,3,4,32,4,56,17,26};
	int res = FirstLargest(arr,10);
	cout<<res<<" is the 1st largest element position "<<endl;
	swapLargest(arr ,res);
	cout<<"ARRAY AFTER FINDING THE 1ST LARGEST NUMBR AND SWAPPING"<<endl;
	for(int i = 0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"now the second largest element will be:"<<endl;
	int max2=arr[1];
	for(int i =1;i<10;i++)
	{
		if(arr[i]>max2)
		{
			max2 = arr[i];
		}
	}
	//cout<<"1ST LARGEST NUMBER IS "<<max1<<endl;
	cout<<"2nd LARGEST NUMBER IS "<<max2<<endl;
	return 0;
}
