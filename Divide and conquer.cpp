#include <iostream>
using namespace std;
 
//  function to merge the two divisions of data set into one piece of sorted data.

void Merge(int *m, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.

	int temp[high-low+1];
	int i = low;
	int j = mid + 1;
    int k = 0;

	// Merge the two parts into temp[].

	while (i <= mid && j <= high)
	{
		if (m[i] < m[j])
		{
			temp[k] = m[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = m[j];
			k++;
			j++;
		}
	}
 
	// This inserts all the remaining values counting from i to mid into temp[].

	while (i <= mid)
	{
		temp[k] = m[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].

	while (j <= high)
	{
		temp[k] = m[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to m[].

	for (i = low; i <= high; i++)
	{
		m[i] = temp[i-low];
	}
};
 
// this function splits an array into two parts.

void MergeSort(int *m, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two halves.
		MergeSort(m, low, mid);
		MergeSort(m, mid+1, high);
 
		// Merge them to get sorted data.
		Merge(m, low, high, mid);
	}
};
 
int main()
{
	int n, i;
	cout<<"\n please enter the number of data elements to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	// Print the sorted data.
	cout<<"\nSorted Data is: ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
};