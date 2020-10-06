//Selection Sort, Bubble Sort and Insertion Sort

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
	
menu:
	cout << "Enter Choice -> 1 for Selection Sort ; 2 for Bubble Sort ; 3 for Insertion Sort ; 4 to Quit : ";
	cin >> ch;
	
	//menu
	switch(ch)
	{
	
		case 1:
		    selectionSort(arr, n); 
		    cout << endl << "Sorted Array using Selection Sort: "; 
		    printArray(arr, n);
		    break;
		    
		case 2:  
		    bubbleSort(arr, n);
		    cout << endl << "Sorted Array using Bubble Sort: "; 
		    printArray(arr, n); 
		    break;
		    
		case 3:  
		    insertionSort(arr, n);
		    cout << endl << "Sorted Array using Insertion Sort: "; 
		    printArray(arr, n); 
		    break;
		
		case 4:
			exit(0);
		    	
		default:
			cout << endl << "Invalid Input" << endl;
			goto menu;
		    break;
	}
	
	return 0;
}
