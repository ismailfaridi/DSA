#include <iostream>
#include <climits> // INT_MAX, INT_MIN
using namespace std;

// # Array: 0 based indexing, pass by ref by default

int getSmallest(int arr[], int size)
{
    int smallest = INT_MAX; // +infinity

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    return smallest;
}

int getLargest(int arr[], int size)
{
    int largest = INT_MIN; // -infinity

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int linearSearch(int arr[], int size, int target) // O(n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i; // return index
    }
    return -1;
}

void reverseArray(int arr[], int size) // O(n)
{
    // Two Pointer Approach
    int start = 0, end = size - 1;

    while (start < end) // odd and even array handel
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void calcSumProduct(int arr[], int size)
{
    int sum = 0, product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "\nSum: " << sum << "\nProduct: " << product << endl;
}

void swapMaxMin(int arr[], int size)
{
    if (size == 0)
        return;

    int maxIdx = 0, minIdx = 0;
    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIdx = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
    }

    swap(arr[maxIdx], arr[minIdx]);
}

void uniqueElements(int arr[], int size) // ignore duplicates
{
    cout << "\nUnique Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if ((i != j) && (arr[i] == arr[j]))
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }
    cout << endl;
}

void intersection(int arr1[], int n, int arr2[], int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = -1; // visited
                break;
            }
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // cout << sizeof(arr) << endl; // 5*4=20
    int size = sizeof(arr) / sizeof(int); // 5

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    int nums[] = {55, 7, 99, 10, -10, 66};
    size = sizeof(nums) / sizeof(int);

    cout << "\nSmallest: " << getSmallest(nums, size) << endl;
    cout << "Largest: " << getLargest(nums, size) << endl;

    cout << "Linear Search: " << linearSearch(nums, size, 99) << endl;

    reverseArray(nums, size);
    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";

    // Practice
    int numbers[] = {1, 6, 2, 3, 8, 4, 5, 7, 7};
    size = sizeof(numbers) / sizeof(int);

    calcSumProduct(numbers, size);

    swapMaxMin(numbers, size);
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    uniqueElements(numbers, size); // ignore duplicates

    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};
    intersection(arr1, 4, arr2, 4);
}