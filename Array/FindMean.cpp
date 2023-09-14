//to find mean of n numbers in an array
#include<iostream>
using namespace std;
int FindMean(int sum, int size)
{
	int mean = sum/size;
	return mean;
}
int main()
{
	int arr[100];
	int size;
	cout<<"ENTER THE SIZE OF YOUR ARRAY"<<endl;
	cin>>size;
	int sum = 0;
	cout<<"ENTER THE ELEMENTS OF THE ARRAY: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		sum = sum + arr[i];
	}
	cout<<"SUM =  "<<sum<<endl;
    cout<<size <<"  is the total number of elements present in this aray"<<endl;
    int mean = FindMean(sum,size);
    cout<<"MEAN OF THE ARRAY ELEMENTS ARE "<<mean<<endl;
}
