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
	cout<<"The sum of the given array elements:";
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<sum;
	return 0;
}
