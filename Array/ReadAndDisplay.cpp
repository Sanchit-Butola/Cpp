//read an array and display it by function
#include<iostream>
using namespace std;
void PrintArray(int arr[], int size)
{
	cout<<"THE ELEMENTS YOU ENTERED ARE "<<endl;
	for(int i=0;i<size;i++)
	{
		
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[100];
	int size;
	cout<<"ENTER THE SIZE OF YOUR ARRAY"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<endl<<"ENTER THE NUMBER AT INDEX "<<i<<endl;
		cin>>arr[i];
	}
	PrintArray(arr,size);
	
}

