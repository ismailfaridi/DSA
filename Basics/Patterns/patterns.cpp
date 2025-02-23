#include <bits/stdc++.h>
using namespace std;

/*
# Patterns:
Most of them inlcude nested for loops.
- For outer loop, count the no of rows.
- For inner loop, focus the no of columns & connect them somehow to the rows.
- Print '*' inside inner loop.
- Observer symmetry (optional).
*/

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < i + 1; j++)
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < i + 1; j++)
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++) // total - rowNo + 1
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << n - j + 1;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pyramid
    *      [4,1,4]
   ***     [4,3,4]
  *****    [4,5,4]
 *******   [4,7,4]
*********  [4,9,4]
           [space, star, space]
           [n-i-1, 2i+1, n-i-1]
*/
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << '*';
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// Reverse Pyramid
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star 2n-(2i+1)
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

// Arrow Pattern
void pattern10(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int stars = i;

        if (i > n)
            stars = (2 * n - i);

        for (int j = 1; j <= stars; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern11(int n)
{
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            num = 1;
        else
            num = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num; // toggling value
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int spaces = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        // num
        for (int j = 1; j <= i; j++)
            cout << j;

        // space
        for (int j = 1; j <= spaces; j++)
            cout << " ";

        // num
        for (int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
        spaces -= 2;
    }
}

void pattern13(int n)
{
    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) // A + [B C D E]
        {
            cout << ch;
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        // char
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;

        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < (n - i - 1); j++)
            cout << " ";

        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (char ch = ('A' + n - 1) - i; ch <= ('A'+n-1); ch++)
    //     {
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
}

void pattern19(int n)
{
    int spaces = 0;

    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
            cout << "*";

        // space
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // stars
        for (int j = 1; j <= n - i; j++)
            cout << "*";

        spaces += 2;
        cout << endl;
    }

    spaces = 2 * n - 2;

    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // space
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        spaces -= 2;
        cout << endl;
    }
}

void pattern20(int n)
{
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        // stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        // spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";

        // stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

#include <math.h>
void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);
}