//Bubble Sort

#include<bits/stdc++.h>
using namespace std;

#define lli long long int


void bubbleSort(int arr[], int size)
{
	int small, temp, k, i, j;
	for(i=0; i < size; i++)
    {
        for(j=0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
	
	//bubble sort
	bubbleSort(arr, n);
	cout << endl << "Sorted Array using Bubble Sort: "; 
	printArray(arr, n); 
	
	return 0;
}
