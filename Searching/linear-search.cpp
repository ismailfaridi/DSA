#include <iostream>
using namespace std;

// O(n)
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i; // return index
    }
    return -1;
}

int main()
{
    int nums[] = {55, 7, 99, 10, -10};
    int size = sizeof(nums) / sizeof(int);

    cout << "Linear Search: " << linearSearch(nums, size, 99) << endl;
}