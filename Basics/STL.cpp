#include <iostream>
using namespace std;

/*
Standard Template Library (STL)
1. Containers
2. Algorithm
3. Functions
4. Iterators
*/

/*
# Pair
Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples.
- The first element is referenced as ‘first‘ and the second element as ‘second‘ and the order is fixed (first, second).
- To access them, we use variable name followed by dot operator and finally the keyword ‘first‘ or ‘second‘.

pair<data_type_1, data_type_2> pairName;
pair<data_type_1, data_type_2> pairName(value1, value2);
pair<data_type_1, data_type_2> pairName = {v1, v2};
*/
/*
#include <utility>
int main()
{
    pair<int, int> p = {1, 2}; // only two
    cout << p.first << " " << p.second << endl;

    pair<int, float> pr(4, 3.14);
    cout << pr.first << " " << pr.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {4, 5}};
    cout << arr[0].second << endl;
}
*/

// 🔥CONTAINERS🔥

// # Vector: vector is a dynamic array with the ability to resize itself automatically when an element is inserted or deleted.
#include <vector>
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
