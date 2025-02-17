#include <iostream>
using namespace std;

/*
Data Structures:

- Primitive
- Non-Primitive
    - Linear
        - Static
            - Arrays
        - Dynamic
            - Vectors
            - Linked List
            - Stack
            - Queue
    - Non-Linear
        - Tree
        - Graph
        - Table / Set
*/

/*
# PATTERNS

outer loop (rows): n times
inner loop: what to print in single row
*/

void square_num()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
            // cout << "* ";
        }
        cout << endl;
    }
}

void square_character()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A'; // everyline start with char A

        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++; // ASCII values increase
        }
        cout << endl;
    }
}

void square_increase_num()
{
    int n = 3, num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void triangle()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void triangle_num()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void triangle_character()
{
    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void triangle_num_increase_1()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void triangle_num_increase_2()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i + 2; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void triangle_num_increase_3()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void reverse_num_triangle()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void reverse_character_triangle()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void floyds_triangle()
{
    int n = 4, num = 1;

    for (int i = 0; i < n; i++)
    {
        // for (int j = i + 1; j > 0; j--)
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void inverted_triangle()
{
    // 1111
    //  222
    //   33
    //    4

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // spaces
            cout << " ";

        for (int j = 0; j < (n - i); j++) // numbers
            cout << i + 1;

        cout << endl;
    }
}

void inverted_triangle_character()
{
    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 0; j < n - i; j++)
            cout << ch;

        ch++;
        cout << endl;
    }
}

void pyramid()
{
    //    1
    //   12 | 1
    //  123 | 21
    // 1234 | 321

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces: n-i-1
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        // nums1: i+1
        for (int j = 1; j <= (i + 1); j++)
            cout << j;

        // nums2
        for (int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

void hollow_diamond()
{
    //    *
    //   *  *
    //  *    *
    // *      *
    // --------
    //  *    *
    //   *  *
    //    *

    int n = 4;

    // top part
    for (int i = 0; i < n; i++)
    {
        // spaces: n-i-1
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        // star
        cout << "*";

        // spaces: odd nums 2*i-1
        if (i != 0)
        {
            for (int j = 0; j < (2 * i - 1); j++)
                cout << " ";

            // star
            cout << "*";
        }
        cout << endl;
    }

    //  bottom part
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < (i + 1); j++)
            cout << " ";

        // star
        cout << "*";

        // spaces
        if (i != n - 2)
        {
            for (int j = 0; j < (2 * (n - i) - 5); j++)
                cout << " ";

            // star
            cout << "*";
        }
        cout << endl;
    }
}

void butterfly()
{
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *

    int n = 4;

    // Top half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print first set of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print second set of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the pattern
    for (int i = n; i >= 1; i--)
    {
        // Print first set of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print second set of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    square_num();
    square_character();
    square_increase_num();
    triangle();
    triangle_num();
    triangle_character();
    triangle_num_increase_1();
    triangle_num_increase_2();
    triangle_num_increase_3();
    reverse_num_triangle();
    reverse_character_triangle();
    floyds_triangle();
    inverted_triangle();
    inverted_triangle_character();
    pyramid();
    hollow_diamond();
    butterfly();

    return 0;
}
