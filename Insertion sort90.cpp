#include<iostream>
using  namespace std;
void insertion_sort(int arr[],int n)
	{
		for(int i=1;i<n;i++)
		{
			int key=arr[i];
			int j=i-1;
			while(j>=0&&arr[j]>key)
			{
				arr[j+1]=arr[j];
				j=j-1;
			}
			arr[j+1]=key;
		}
	}
	void printArray(int arr[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	int main()
	{
		int n;
		cout<<"Enter size";
		cin>>n;
		int arr[n];
		cout<<"enter elements";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		insertion_sort(arr,n);
		cout<<"sorted array";
		printArray(arr,n);
		return 0;
	}

