//Selection Sort

#include<bits/stdc++.h>
using namespace std;

#define lli long long int


void selectionSort(int arr[], int size)
{
	int small, temp, k, i=0;
	for(k=0; k < size; k++)
    {
        small = k;
        
        for(i=k; i < size; i++)
        {
            if(arr[small] > arr[i])
                small = i;
        }
        
        temp = arr[k];
        arr[k] = arr[small];
        arr[small] = temp;
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
	
	//selection sort
	selectionSort(arr, n);
	cout << endl << "Sorted Array using Selection Sort: "; 
	printArray(arr, n); 
	
	return 0;
}
