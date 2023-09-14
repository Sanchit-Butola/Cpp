//programe to print the position of the smallest number in the array 
#include<iostream>
using namespace std;
int main()
{
	int pos=0;
	int arr[10]={2,34,4,6,3,56,2,56,1,23};
	int min = arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			 pos = i;	
		}
		
	}
	cout<<"MIN VALUE OF THE GIVEN ARRAY IS  "<<min<<"  and is present at the index  "<<pos<<endl;
	return 0;
}
