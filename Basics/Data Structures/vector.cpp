#include <iostream>
#include <vector>
using namespace std;

/*
Array is static stored in stack at compile time, we can't increase it's size after declare.

# Vector
- Vector is a Dynamic Array stored in heap with the ability to resize itself automatically when an element is inserted or deleted.
- Store element of same type in a linear arrangement.
- 0 based indexing.
- By defualt pass by value to function.
- #include <vector>
- Vector Functions: size, capacity, emplace_back, push_back, pop_back, front, back, at() or [], erase, insert(pos, value), clear, empty

- emplace_back faster than push_back

+ size(): no of elements in array.
+ capacity(): how many elements the vector can hold before it needs to reallocate additional memory. When capacity reaches it double (x2) it's capacity.
*/

/*
int main()
{
    vector<int> vec;
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2(5, 0); // size 5 all initialized to 0
    vector<char> cvec = {'a', 'b', 'c'};

    cout << "size: " << vec.size() << endl;
    cout << "size: " << vec1.size() << endl;
    cout << "size: " << vec2.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    // for each loop
    for (int i : vec1) // i holds a copy (value) of each element in vec1
    {
        cout << i << " ";
    }

    vec.push_back(10);
    vec.emplace_back(20);
    cout << "\nsize: " << vec.size() << endl;
    cout << "font: " << vec.front() << endl;
    cout << "back: " << vec.back() << endl;
    cout << "at: " << vec.at(1) << endl;

    vec.push_back(30);
    cout << "capacity: " << vec.capacity() << endl; // 4

    vec.pop_back();
    cout << "size: " << vec.size() << endl;
}
*/

/*
int linearSearch(const vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
            return i;
    }
    return -1;
}

void reverseVector(vector<int> &vec)
{
    if (vec.empty()) return;
    
    // Two Pointer Approach
    int start = 0;
    int end = vec.size() - 1;

    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {3, 4, 1, 2, 7, 6, 5, 9, 8};
    int target = 5;

    int index = linearSearch(vec, target);

    if (index != -1)
        cout << target << " is in the vector at index " << index << "." << endl;
    else
        cout << target << " isn't in the vector." << endl;

    reverseVector(vec);
    for(auto i : vec)
        cout << i << " ";
}
*/