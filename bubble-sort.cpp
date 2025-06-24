#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n);

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    bubbleSort(arr, n);
    cout << "\nSorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";



    return 0;
}


void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }

        }
    }
}
