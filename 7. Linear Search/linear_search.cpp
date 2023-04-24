#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cout<<"Enter the "<<i+1<<" element: ";
       cin>>arr[i];
    }
    int x ;
    cout<<"Enter the number to be searched: ";
    cin>>x;
    
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
