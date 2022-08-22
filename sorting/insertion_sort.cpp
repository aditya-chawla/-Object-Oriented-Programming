#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void insertionSort(int arr[], int n)
{
	int i, key, j, pass=0;
	for (i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
		pass++;
			cout<<"After pass "<<pass<<" :";
			printArray(arr, n);
	}
}

int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionSort(a, n);
	cout<<"\nArray after insertion sort : ";
	printArray(a, n);

	return 0;
}
