#include <iostream>
using namespace std;

/*
-----------------------------------------
Standard Template Library (STL)
1. Containers: Sequence(vector, list, deque), Non-Sequence(stack, queue, set), special(pair)
2. Algorithm
3. Functions
4. Iterators
-----------------------------------------
*/

// 🔥CONTAINERS🔥

/*
Array is static stored in stack, we can't increase it's size after declare.

# Vector
- Vector is a Dynamic Array stored in heap with the ability to resize itself automatically when an element is inserted or deleted.
- Store element of same type in a inear arrangement.
- 0 based indexing.
- #include <vector>
- Vector Functions: size, capacity, emplace_back, push_back, pop_back, front, back, at() or [], erase, insert(pos, value), clear, empty

- emplace_back faster than push_back

+ size(): no of elements in array.
+ capacity(): how many elements the vector can hold before it needs to reallocate additional memory. When capacity reaches it double (x2) its capacity.
*/

#include <vector>
/*
int main()
{
    // vector<int> vec1; // size 0
    // cout << "Size: " << vec1.size() << endl;

    // vector<int> vec2 = {1, 2, 3}; // size & element 3
    // cout << "Size: " << vec2.size() << endl;
    // cout << "Element: " << vec2[0] << endl;

    // vector<int> vec3(10, 0); // size 10 & all initalized to 0
    // cout << "Size: " << vec3.size() << endl;
    // cout << "Element: " << vec3[0] << endl;

    // vector<int> vec_copy(vec2);
    // cout << vec_copy[1] << endl;

    // vec_copy.emplace_back(786);
    // cout << vec_copy[3] << endl;

    vector<char> vec = {'A', 'B', 'C'};

    // Iterator
    for (char i : vec) // for each loop
    {
        cout << i << " ";
    }

    // Vector Functions: size, push_back, pop_back, front, back, at
    cout << "\nSize: " << vec.size() << endl;

    vec.push_back('D');
    cout << vec[3] << endl;
    cout << "Size: " << vec.size() << endl;

    vec.pop_back(); // delete last element in vector
    cout << "Size: " << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;

    // size() and capacity()
    cout << "size and capacity\n";
    vector<int> v;

    cout << "size = " << v.size() << endl;
    cout << "capacity =" << v.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl; // 2

    v.push_back(3);
    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl; // 2

    // Costly Operations:
    // erase() - delete element or range of elements. change the size but not the capacity
    // insert(pos, value) - allows insert in between.
    cout << "\nerase and insert" << endl;
    vector<int> v1 = {10, 20, 30, 40, 50};

    v1.erase(v1.begin()); // begin is iterator. Removes the first element (10)
    for (int i : v1)
        cout << i << " ";
    cout << "\nsize: " << v1.size() << endl; // 4

    v1.erase(v1.begin() + 2); // 20,30,(40),50
    for (int i : v1)
        cout << i << " ";
    cout << "\nsize: " << v1.size() << endl; // 3

    v1.erase(v1.end() - 1); // Rmoves the last element (50). end() iterator reutrn position of afte the last element.
    for (int i : v1)
        cout << i << " ";

    v1.push_back(786);
    cout << endl;

    v1.erase(v1.begin(), v1.begin() + 2); // erase[start, end) ... end isn't included
    for (int i : v1)
        cout << i << " ";

    cout << endl;

    v1.insert(v1.begin(), 1122);
    v1.insert(v1.end(), 3344);
    for (int i: v1)
        cout << i << " ";

    // clear() - clear the whole vector, but the capacity is same.
    // empty() - check wheter the vector is empty. Return 1 if empty, otherwise 0.
    v1.clear();
    cout << endl << v1.capacity() << endl;
    cout << "Is empty: " << v1.empty() << endl;
}
*/

/*
📌 Iterators
Iterators in C++ is a pointer like object used to traverse and manipulate elements in data structures like vectors, lists, maps, etc.

- begin()	Points to the first element
- end()     Points past the last element {after the last index}
- rbegin()	Points to the last element (reverse)
- rend()	Points before the first element (reverse)
- cbegin()	Constant iterator to the first element
- cend()	Constant iterator past the last element
- crbegin()	Constant reverse iterator
- crend()	Constant iterator before the first element

+ Use for-each loop when you need simple iteration (read-only or modifying values).
+ Use iterators when you need fine control (removing elements, inserting, or skipping elements).
*/
/*
int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    // For-each loop
    for(int value : vec)
    {
        cout << value << " ";
    }

    cout << "\n*vec.begin()=" << *(vec.begin()) << endl; // dereference the iterator

    // Iterators are more flexible than for-each loop and work with any container
    // forward
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // backward
    // vector<int>::reverse_iterator rit;
    // for (rit = vec.rbegin(); rit != vec.rend(); rit++)
    // {
    //     cout << *(rit) << " ";
    // }

    // for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); rit++)
    // {
    //     cout << *(rit) << " ";
    // }

    for (auto itr = vec.rbegin(); itr != vec.rend(); itr++) // # auto keyword allows the compiler to automatically determine the correct data type.
    {
        cout << *(itr) << " ";
    }
}
*/

/*
// REPEAT
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster than push_back()

    vector<pair<int, int>> vp; // vector of pairs
    vp.push_back({1, 2});
    vp.emplace_back(3, 4); // automatically assume that pair

    // vector<dt> v(size, value);
    // vector<dt> v(size);
    // If we again push element it auto incrases it size.

    vector<int> v1(5, 100); // vector of size 5 initialized all with 100
    cout << v1.at(0) << endl;
    cout << v1[3] << endl;

    vector<int>v2(5); // vector of size 5 initialized all with 0
    cout << v2[4] << endl;

    vector<int> cp(v1); // copy
    cout << cp[4] << endl;

    cout << cp.back() << endl; // last element

    // Accessing vector: x.at(), x[], iterator
    // Iterators are used to point to memory address of vector element.

    vector<int> vi;
    vi.emplace_back(33);
    vi.emplace_back(44);
    vi.emplace_back(55);
    vi.emplace_back(55);

    vector<int>::iterator it = vi.begin(); // begin() point to first element of vector
    it++;
    cout << *it << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it1 = vi.end(); // Point to after last index, so -- it before.
    cout << *it1 <<endl;
    it1--;
    cout << *it1 <<"\n\n";

    vector<int>::reverse_iterator it2 = vi.rend(); // reverse end
    vector<int>::reverse_iterator it3 = vi.rbegin(); // reverse begin

    cout << "Printing vector values\n";

    vector<int> vt = {10, 20, 30, 40, 50};

    for (vector<int>::iterator it = vt.begin(); it != vt.end(); it++) {
        cout << *it << " ";
    }

    // automatically detect the type
    for(auto it = vt.begin(); it != vt.end(); it++)
    {
        cout << *it << " ";
    }

    // it take copy of value (not an address or reference)
    // for(auto& it : vt)
    for(auto it : vt)
    {
        cout << it << " ";
    }
}
*/

/*
# List
- List is sequential container, internally implemented through Doubly Linked List.
- List doesn't support random access. Only support sequential access via iterators.
- #include <list>
- Functions: push_back, push_front, emplace_back, emplace_front, pop_back, pop_front
             front, back, insert, size, erase[start, end), clear, begin, end, rbegin, rend
*/

#include <list>
/*
int main()
{
    list<int> li;

    li.push_back(2);
    li.push_front(1);

    for (int val : li)
        cout << val << " ";

    li.pop_back();
    li.pop_front();
    cout << "\nIs empty: " << li.empty() << endl;

    li.emplace_front(1);
    li.emplace_back(2);
    cout << "size: " << li.size() << endl;
    cout << "font: " << li.front() << endl;
    cout << "back: " << li.back() << endl;

    // li.erase(li.begin(), li.end());

    // Doesn't allow random access
    // li.insert(li.begin() + 1, 786);
    // cout << li[1] << endl;

    auto it = li.begin();
    advance(it, 1); // move iterator to second position
    li.insert(it, 786);
    // cout << *it;
    for (int val : li)
        cout << val << " ";
}
*/

/*
# Deque (Double Ended Queue)
- Deque is a sequential container provide the functionality of Double-Ended Queue. We can insert and remove elements from both the front and rear.
- Deque internall implemented using Dynamic Arays, that's why random access is allowed.
- #include <deque>
- Functions: push_back, push_front, emplace_back, emplace_front, pop_back, pop_front
             front, back, insert, size, erase[start, end), clear, begin, end, rbegin, rend

Note: Dequeue is popping an element from the queue.
*/

#include <deque>
/*
int main()
{
    deque<int> dq = {1, 2, 3};

    dq.push_back(4);
    dq.push_front(0);

    dq.insert(dq.begin(), 786);

    cout << "size: " << dq.size() << endl;

    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";

    cout << "\ndq[2] = " << dq[2];
}
*/

/*
# Pair
- Pair is used to combine together two values that may be of same or different data types as a single unit.
- It is the part of #include <utility> library.
*/

// #include <utility> // no need to include
/*
int main()
{
    pair<int, float> p1 = {1, 3.14};
    pair<int, int> p2(1, 2);

    cout << p1.first << ", " << p1.second << endl;
    cout << p2.first << ", " << p2.second << endl;

    pair<int, pair<int, int>> p3;
    cout << p3.first << ", " << p3.second.first << ", " << p3.second.second << endl;

    pair<int, int> pArr[2] = {{1, 2}, {3, 4}};
    cout << pArr[1].first << ", " << pArr[1].second << endl;

    // vector of pair
    vector<pair<int, int>> vec = {{10, 20}, {30, 40}};
    for (pair<int, int> p : vec)
        cout << p.first << ", " << p.second << endl;
    cout << endl;

    vec.push_back({11, 22});  // insert already in-place object
    vec.emplace_back(33, 44); // in-place object create and insert. It is faster.

    for (auto p : vec)
        cout << p.first << ", " << p.second << endl;
}
*/

/*
# Stack
- LIFO. Non-Sequential container.
- #inlcude <stack>
- Methods: push, emplace, top, pop, size, empty, swap
*/

#include <stack>
/*
int main()
{
    stack<int> s;

    s.push(10);
    s.emplace(20);

    cout << "Size: " << s.size() << endl;
    cout << "is empty: " << s.empty() << endl;
    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "After pop: " << s.top() << endl;

    s.push(20);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    s.push(1);
    s.push(2);

    stack<int> ss;
    ss.swap(s);
    cout << "s size = " << s.size() << endl;   // 0
    cout << "ss size = " << ss.size() << endl; // 2
}
*/

/*
# Queue
- FIFO. Non-Sequential container.
- #include <queue>
- Functions: push, emplace, front, pop, size, empty, swap
*/

#include <queue>

/*
# Priority Queue
- 
- 
- Functions: push, emplace, top, pop, size, empty
*/

/*
# Map
- 
- 
- Functions: insert, emplace, count, erase, find, size, empty, erase
*/

/*
# Set
- 
- 
- Functions: insert, emplace, count, erase, find, size, empty, erase
*/
