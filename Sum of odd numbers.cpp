#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,sum=0;
	cout<<"Enter size of an array:";
	cin>>n;
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			sum=sum+arr[i];
		}
	}
	cout<<"The sum of odd numbers:"<<sum;
	return 0;
}
