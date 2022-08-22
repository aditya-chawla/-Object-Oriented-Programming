#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int shellSort(int arr[], int n)
{
	int pass=0;
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			int temp = arr[i];
			int j;		
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
			pass++;

			cout<<"After pass"<<pass<<" :";
			printArray(arr, n);
			cout<<endl;
		}
	}
	return 0;
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
	shellSort(a, n);
	cout << "\nArray after Shell sort :";
	printArray(a, n);
	return 0;
}
