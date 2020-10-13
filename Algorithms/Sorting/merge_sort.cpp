#include<iostream> 
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    //Size of the two split arrays will be given by n1 & n2.
    int n1 = m+1-l;
    int n2 = r-m;
    //Copy the elements from arr into the L and R arrays.
    int L[n1], R[n2];
    for (int i=0; i<n1; i++) {
        L[i] = arr[l+i];
    }
    for (int j=0; j<n2; j++) {
        R[j] = arr[m+1+j];
    }
    //Set the indices for L and R to begin merging.
    int i = 0;
    int j = 0;
    int k = l; //Start point for array merging.
    while (i<n1 && j<n2)
    {
        if (L[i]<R[j])
        {
            arr[k] = L[i++];
        }
        else
        {
            arr[k] = R[j++];
        }
        k++;
    }
    while (i<n1) 
    {
        arr[k++] = L[i++];
    }
    while (j<n2) 
    {
        arr[k++] = R[j++];
    }
}

//Function which uses recursion to actually sort the array.
void mergeSort(int arr[], int l, int r)
{
    if (l<r)
    {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

// Function to print an array  
void printArray(int A[], int size) 
{ 
    for(int i = 0; i < size; i++) 
        cout << A[i] << " "; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6, 7 }; 
    int arr_size = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Given array is \n"; 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    cout << "\nSorted array is \n"; 
    printArray(arr, arr_size); 
    return 0; 
} 