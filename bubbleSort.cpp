// Bubble Sort 

#include <bits/stdc++.h>
using namespace std;
  
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
  
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  
int main()
{
    int n, i, x, arr[50];

    cout << "Enter the size of the array > " << endl;
    cin >> n;

    // int arr[n];

    cout << "Enter the elements into the list > " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Sorted array > ";
    printArray(arr, n);
    return 0;
}