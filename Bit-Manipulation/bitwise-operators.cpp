#include <iostream>
using namespace std;

/*
# BITWISE OPERATORS
AND: &
OR: |
XOR: ^
Left Shift: <<      (multiply by 2^x)
Right Shift: >>     (divide by 2^x)


# Operator Precedence & Associativity: search on the Internet for table


# DATA TYPE MODIFIERS
long, short, long long, signed(+ve, -ve), unsigned(+ve)
*/

int main()
{
    int a = 4, b = 10;

    // 8 4 2 1
    cout << "Bitwise AND: " << (a & b) << endl;          // 0100 & 1010 = 0000
    cout << "Bitwise OR: " << (a | b) << endl;           // 0100 & 1010 = 1110
    cout << "Bitwise XOR: " << (a ^ b) << endl;          // 0100 & 1010 = 1110
    cout << "Bitwise Left Shift: " << (a << 1) << endl;  // 0100 -> 1000
    cout << "Bitwise Right Shift: " << (a >> 1) << endl; // 0100 -> 0010


    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(long long) << endl;

    // unsigned int id = -22; // garbage value print
    unsigned int id = 22;
    cout << id << endl;
}