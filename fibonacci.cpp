// Fibonacci Numbers: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
// F[0] = 0
// F[1] = 1
// F[n] = F[n−1] + F[n−2]

#include <iostream>
using namespace std;

// Recursive - Θ(Φ^n)
int fib(int n)
{
    if(n < 2)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

// memoization
int arr[100]; // array fill from bottom up, mean first arr[2], then arr[3] and so on.
int memo_fib(int n)
{
    if(n<2)
        return n;
    if(arr[n] == -1)
        arr[n] = memo_fib(n - 1) + memo_fib(n - 2);

    return arr[n];
}

// DP Algo - O(n)
int iter_fib(int n)
{
    int F[n + 1];
    F[0] = 0;
    F[1] = 1;

    for(int i = 2; i <= n; i++)
        F[i] = F[i - 1] + F[i - 2];

    return F[n];
}

int main()
{
    int num = 6;
    cout << "Fibonacci of " << num << " is: "<< fib(num) << endl;

    for(int i = 0; i < 100; i++) { arr[i] = -1; }
    cout << "Fibonacci of " << num << " is: "<< memo_fib(num) << endl;

    cout << "Fibonacci of " << num << " is: "<< iter_fib(num) << endl;
}