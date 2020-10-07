//Insertion Sort

#include<bits/stdc++.h>
using namespace std;

#define lli long long int


void insertionSort(int arr[], int size)
{
	int temp, i;
	for(i=1; i < size; i++)
    {
        temp = arr[i];
        while ( (i-1) >= 0 && arr[i-1] > temp)
        {
            arr[i] = arr[i-1];
            i--;
        }
        arr[i] = temp;
    }
}


void printArray(int arr[], int size) 
{ 
    int i; 
    for(i=0; i < size; i++) 
        cout << arr[i] << " "; 
}


int main() 
{ 

	int ch;
	//int arr[] = {10, 7, 8, 9, 1, 5}; 
	
	//input array size
	int n;
	cout << "Enter array size: ";
	cin >> n;
	
	//input array
	int arr[n];
	cout << "Enter array elements: ";
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	//insertion sort
	insertionSort(arr, n);
	cout << endl << "Sorted Array using Insertion Sort: "; 
	printArray(arr, n); 
	
	return 0;
}
