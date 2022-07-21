// Linear Search

#include <iostream>
using namespace std;

void LS(int arr[], int n, int x)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Element found at position > " << i + 1 << endl;
    }
    else
    {
        cout << "Element not found !" << endl;
    }
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

    cout << "Enter the element to be searched > " << endl;
    cin >> x;

    LS(arr, n, x);
}