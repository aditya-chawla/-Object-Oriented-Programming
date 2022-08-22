#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx,pass=0;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j=i+1;j<n;j++)
		{
		
		if (arr[j]<arr[min_idx])
			min_idx=j;
		swap(&arr[min_idx], &arr[i]);
		pass++;
		cout<<"After pass "<<pass<<" :";
		printArray(arr, n);
		}
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
	selectionSort(a, n);
	cout << "\nArray after selection sort : ";
	printArray(a, n);
	return 0;
}
