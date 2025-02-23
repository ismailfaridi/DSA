#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int *temp = new int[high - low + 1];
    int i = low, k = 0, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];

    for (int i = 0; i < k; i++)
        arr[low + i] = temp[i];

    delete[] temp;
}

void MergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[10] = {4, 7, 1, 9, 4, 2, 6, 8, 3, 5};

    MergeSort(arr, 0, 10 - 1);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}