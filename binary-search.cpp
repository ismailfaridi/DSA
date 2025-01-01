#include <iostream>
using namespace std;

/*
# Binary Serach
Time Complexity: O(log n)

Space Complexity:
    Iterative: O(1)
    Recursive: O(log n)
*/

// Iterative Method
int Binary_Search(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key == arr[mid])
            return mid;

        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

// Recursive Method
int RBinary_Search(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (key == arr[mid])
            return mid;

        if (key < arr[mid])
            return RBinary_Search(arr, low, mid - 1, key);
        else
            return RBinary_Search(arr, mid+1, high, key);
    }

    return -1;
}

// int n = (0+9)/2; // 4.5 => 4 (Interger division always truncate in C++)
// cout<<n;

int main()
{
    // Array must be sorted
    const int no_of_elements = 10;
    int arr[no_of_elements] = {4, 6, 7, 15, 33, 51, 79, 88, 97, 100};

    // Iterative
    int index = Binary_Search(arr, no_of_elements, 51);
    if (index != -1)
        cout << "Number " << arr[index] << " is in the index " << index << endl;
    else
        cout << "Number not found!" << endl;

    // Recursive
    int indices = RBinary_Search(arr, 0, no_of_elements - 1, 51);
    if (indices != -1)
        cout << "Number " << arr[indices] << " is in the index " << indices << endl;
    else
        cout << "Number not found!" << endl;
}