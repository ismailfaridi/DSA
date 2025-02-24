#include <iostream>
using namespace std;

/*
-----------------------------------------
Standard Template Library (STL)
1. Containers: Sequence(vector, list, deque), Non-Sequence(stack, queue, map, set), not a container(pair)
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
- first, second
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

TC: emplace, push, pop, front = O(1)
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

TC: emplace, push, pop, front = O(1)
*/

#include <queue>
/*
int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);

    while (!q.empty())
    {

        cout << q.front() << endl;
        q.pop();
    }

    q.emplace(1);
    q.emplace(2);

    cout << "Size: " << q.size() << endl;

    queue<int> qq;
    qq.swap(q);
    cout << "q size = " << q.size() << endl;
    cout << "qq size = " << qq.size() << endl;
}
*/

/*
# Priority Queue
- Internally is a max heap (by default) or min heap which are complete binary tree.
- #include <queue>
- Functions: push, emplace, top, pop, size, empty

TC: emplace, push, pop = O(log n)
TC: top() = O(1)
*/

// # include <queue>

/*
int main()
{
    priority_queue<int> pq; // max-heap (by default)
    priority_queue<int, vector<int>, greater<int>> min_pq; // min-heap
    // priority_queue<T, Container, Compare>

    pq.push(10);
    pq.push(20);
    pq.push(5);

    cout << "Size: " << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    min_pq.emplace(10);
    min_pq.emplace(30);
    min_pq.emplace(20);

    while(!min_pq.empty())
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
}
*/

/*
# Map
- Map is used to store key-value pairs, in which key is unique. By default map automatically sort data in ascending order using key's.
- #include <map>
- Functions: insert, emplace, count, erase, find, size, empty, erase
             first, second

+ count() the number of times specific key appears in map.
+ If find() found the key-value pair then it return Iterator, otherwise return m.end().


# Multi Map
- Allows to store multiple (duplicate) keys. Elements are sorted based on keys.
- We don't able to use [], instead we use insert().
- Internally implemented as balanced tree, e.g., Red-Black Tree.
- Lookup Complexity: O(log n)
- #inlcude <map>

# Unordered Map
- Store data in random order (not sorted), means data can be printed in any order.
- Doesn't allow duplicate keys.
- Internally implemented as Hash Table.
- Lookup Complexity: O(1) avg, O(n) worst. So faster than map.
- #include <unordered_map>


map: no duplicate keys, sorted, self balancing tree, O(log n)
multimap: allow duplicate keys, sorted, red-black tree
unordered map: no duplicate keys, unordered, hash table, O(1) avg.
*/

#include <map>
#include <unordered_map>
/*
int main()
{
    map<string, int> m;

    m["tv"] = 50;
    m["laptop"] = 100;
    m["apple"] = 100;

    m.insert({"camera", 10});
    m.emplace("headphone", 55);

    m["apple"] = 786; // replace the value

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    // Note the sorting of keys

    // Count the number of times specific key appears in map.
    cout << "\ncount: " << m.count("tv") << endl;

    cout << "Laptop = " << m["laptop"] << endl;
    cout << "Is empty: " << m.empty() << endl;

    m.erase("tv");
    cout << "size: " << m.size() << endl;

    // If find() found the key-value pair then it return Iterator, otherwise return m.end().
    if (m.find("laptop") != m.end())
        cout << "found";
    else
        cout << "not found";

    cout << "\n\nMULTIMAP\n";

    multimap<int, string> mm;
    mm.insert({1, "Ismail"});
    mm.insert({2, "Ibrahim"});
    mm.insert({1, "Muhammad Ismail"});

    mm.emplace(3, "Muhammad");

    for (auto pr : mm)
        cout << pr.first << ": " << pr.second << endl;

    cout << "\nerase\n";
    // mm.erase(1); // erase all instances
    mm.erase(mm.find(1)); // find() will return iterator and which delete one instance

    for (auto pr : mm)
        cout << pr.first << ": " << pr.second << endl;

    cout << "size: " << mm.size() << endl;

    cout << "\nUNORDERED MAP\n";
    unordered_map<int, string> um;

    um[1] = "Apple";
    um.insert({2, "Banana"});
    um.emplace(3, "Orange");

    for (auto p : um)
        cout << p.first << ": " << p.second << endl;
}
*/

/*
# Set
- Set store unique elements in sorted order. Internally use Self Balancing tree.
- #include <set>
- Functions: insert, emplace, count, erase, find, size, empty, erase, lower_bound
- insert, count, erase = O(log n)

+ lower_bound(x) return iterator if the x is found, otherwise return just one big value than x. If no big value exit then it return s.end().
+ upper_bound(x) return iterator to value greater than x. If no big value exit it return s.end().

# Multi Set
- Multi set allow duplicate elements. Internally implemented as Self Balancing BST.
- Stored elements in sorted order.
- #include <set>

# Unordered Set
- Unordered set store unique elements, which are not in sorted order. Internally implemented as Hash Table. O(1)
- lower and upper bound doesn't exist of unordered set.
- #include <unordered_set>

set: unique elements, sorted
multi set: allow duplicate elementes, sorted
unordered set: unique elements, not sorted
*/

#include <set>
#include <unordered_set>
/*
int main()
{
    set<int> s = {5, 2, 7, 6, 1};

    s.insert(3);
    s.emplace(4);

    for (auto val : s)
        cout << val << " ";

    s.emplace(1); // set ignore duplicates. size is still same.
    cout << "\nsize: " << s.size() << endl;

    if (s.find(1) != s.end())
        cout << "found";
    else
        cout << "not found";

    s.erase(1);
    cout << "\nsize: " << s.size();

    cout << "\nis empty: " << s.empty();

    s.emplace(10);

    cout << "\nlower bound = " << *(s.lower_bound(7)); // lowerbound return iterator, so derefence
    cout << "\nlower bound = " << *(s.lower_bound(8));

    auto it = s.lower_bound(11); // s.end()
    if (it != s.end())
        cout << "\nlower bound = " << *it;
    else
        cout << "\nlower bound not found";

    cout << "\nupper bound = " << *(s.upper_bound(3));
    auto uit = s.upper_bound(11); // s.end()
    if (uit != s.end())
        cout << "\nupper bound = " << *uit;
    else
        cout << "\nupper bound not found";

    // Other Set Types
    cout << "\n\nMulti Set\n";
    multiset<int> ms = {8, 2, 1}; // allow duplicate + sorted

    ms.emplace(1);

    for (auto val : ms)
        cout << val << " ";

    cout << "\n\nUnordered Set\n";
    unordered_set<int> us = {8, 2, 1, 6}; // no duplicate + unsorted

    ms.emplace(1); // ignored

    for (auto val : us)
        cout << val << " ";
}
*/

// --------------------------------------------------------------------------------------

// 🔥ALGORITHMS🔥

/*
#include <algorithm>

# Sorting
- sort(arr, arr+n); // (start, after-the-last-location] {arr+n-1 is last location}
- sort(arr, arr+n, greater<int>()); // sort in descending order. greater<int>() is a comparator/functor
- sort(v.begin(), v.end());

📌 Comparators
Comparators are basically boolearn functions which return true/false based on upon some comparsion.
*/

#include <algorithm>
/*
bool comparator(pair<int, int> p1, pair<int, int> p2);
bool comparator1(pair<int, int> p1, pair<int, int> p2);

int main()
{
    int arr[5] = {4, 2, 3, 1, 5};
    vector<int> vec = {4, 2, 3, 1, 5};

    // Sorting in ascending order
    sort(arr, arr + 5);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    sort(vec.begin(), vec.end());
    for (auto val : vec)
        cout << val << " ";
    cout << endl;

    // Sorting in descending order
    sort(arr, arr + 5, greater<int>());
    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    sort(vec.begin(), vec.end(), greater<int>());
    for (auto val : vec)
        cout << val << " ";
    cout << "\n\n";

    vector<pair<int, int>> vp = {{3, 1}, {7, 0}, {2, 1}, {5, 8}, {1, 1}};

    // sort(vp.begin(), vp.end()); // sort based on first value of pair
    // for (auto p : vp)
    //     cout << p.first << ", " << p.second << endl;
    // cout << endl;

    // to sort pair on second value, we need to define custom comparator
    // # Custom Comparator
    sort(vp.begin(), vp.end(), comparator); // passing our custom comparator
    for (auto p : vp)
        cout << p.first << ", " << p.second << endl;
    cout << endl;

    // adding condition: if second value is same, then we sort based on first value
    sort(vp.begin(), vp.end(), comparator1);
    for (auto p : vp)
        cout << p.first << ", " << p.second << endl;
}

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else
        return false;
}

bool comparator1(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first)
        return true;
    else
        return false;
}
*/

/*
# Reverse
- reverse(v.begin(), v.end());

# Next Permutation
- A permutation is an arrangement of elements in a specific order. It refers to different ways in which a set of items can be ordered or arranged.
- next_permutation(v.begin(), v.end());
- prev_permutation(v.begin(), v.end());

# Swap, Min, Max
- swap(v1, v2);
- min(v1, v2);
- max(v1, v2);
*/
/*
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(arr, arr + 5);
    // reverse(vec.begin(), vec.end());
    reverse(vec.begin(), vec.begin() + 3); // range. 4,5 not included

    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    for (auto val : vec)
        cout << val << " ";
    cout << "\n\n";

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    prev_permutation(s.begin(), s.end());
    cout << s << "\n\n";

    vector<int> vi = {1, 2, 3};
    do
    {
        for (auto num : vi)
            cout << num << " ";
        cout << endl;
    } while (next_permutation(vi.begin(), vi.end()));
    cout << "\n\n";

    cout << max(4, 5) << endl;
    cout << min(4, 1) << endl;

    int a = 5, b = 10;
    swap(a, b);
    cout << "a=" << a << ", b=" << b;
}
*/

/*
# Max & Min Elements
- max_element(v.begin(), v.end());
- min_element(v.begin(), v.end());
both return iterator.

# Binary Search
-  binary_search(v.begin(), v.end(), target);
return 1 if target exist, otherwise 0.

# Count Set Bits: count number of set bits (1s) in an Integer. (int n=15; 4 bytes, 32 bits, how much bits set to 1 for 15)
- __builtin_popcount(); // int
- __builtin_popcountl(); // long int
- __builtin_popcountll(); // long long
*/
/*
int main()
{
    vector<int> vec = {2, 1, 3, 4, 5};

    cout << *(max_element(vec.begin(), vec.end())) << endl;
    cout << *(min_element(vec.begin(), vec.end())) << endl;
    cout << binary_search(vec.begin(), vec.end(), 4) << "\n\n";

    int n=4;
    long int ln = 4;
    long long int ll = 4;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(ln) << endl;
    cout << __builtin_popcountll(ll) << endl;
}
*/