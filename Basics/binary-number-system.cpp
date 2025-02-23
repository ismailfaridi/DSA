#include <iostream>
using namespace std;

/*
# NUMBER SYSTEM
- Binary:       Base-2
- Decimal:      Base-10
- Hexadecimal:  Base-16
- Octal:        Base-8

--------------------------
1 0101 0
MSB    LSB

# Signed binary number:
Positive number: MSB is 0
Negative number: MSB is 1
--------------------------

# Dec to Binary Conversion:
(42)_10 = (101010)_2

Method 1:
... 32 16 8 4 2 1
    1     1   1

Method 2 (repeated divisin by 2):
2 | 42  -   0
2 | 21  -   1
2 | 10  -   0
2 | 5   -   1
2 | 2   -   0
2 | 1   -   1  (lower to upper write)
2 | 0

# Binary to Dec Conversion;
    1   0   1   0   1   0
... 2^5 2^4 2^3 2^2 2^1 2^0
    32  0   8   0   2   0    (multiply and then add)
    32 + 8 + 2 = 42


# Two's Complement
Negative numbers are stored in computer memory using two's complement method.

1. convert to binary
2. prefix with 0
3. 1's complement (inversion of individual number)
4. add 1 in the 1's complement to make the 2's complement

  -10
 1010   binary
01010   prefix with 0
10101   1's complement
10110   add 1

(-10)_10 = (10110)_2

# Two's complement to Decimal
10110
01001  1's complement
   +1  add 1
0(1010) -> 10 -> -10
*/

int dec_to_binary(int dec_num)
{
    int power = 1; // 10^0 -> 10^1 ...
    int ans = 0;

    while (dec_num > 0)
    {
        int remainder = dec_num % 2;
        dec_num /= 2;

        ans += remainder * power;
        power *= 10;
    }

    return ans;
}

int binary_to_dec(int bin_num)
{
    int power = 1; // 2^0 -> 2^1 ...
    int ans = 0;

    while (bin_num > 0)
    {
        int remainder = bin_num % 10;
        ans += remainder * power;

        bin_num /= 10;
        power *= 2;
    }

    return ans;
}

int main()
{
    int dec_num = 42;
    int bin_num = 101010;
    
    cout << dec_num << " binary is: " << dec_to_binary(dec_num) << endl;
    cout << bin_num << " decimal is: " << binary_to_dec(bin_num) << endl;
}