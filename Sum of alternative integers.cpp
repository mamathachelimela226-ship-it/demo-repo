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
	for(int i=0;i<n;i=i+2)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of alternative integers:"<<sum;
	return 0;
}
