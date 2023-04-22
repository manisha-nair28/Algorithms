#include <iostream>
using namespace std;
 
//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
              min_idx = j;
        }
      
        if (min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
 
//Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
      cout << arr[i] << " ";
      cout << endl;
    }
}
 
int main()
{
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<(i+1)<<" element : ";
        cin>>arr[i];
    }
   
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
