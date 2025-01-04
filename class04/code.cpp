#include <iostream>
using namespace std;

int main()
{
    // Bitwise Operators
    // Bitwise operators are used to perform operations on bits of the integer operands. The bitwise operators supported by C++ are:

    // & (Bitwise AND): It performs a bitwise AND operation on the two operands. The result is 1 if both bits are 1, otherwise 0.
    cout << (5 & 3) << endl;

    // | (Bitwise OR): It performs a bitwise OR operation on the two operands. The result is 1 if at least one of the bits is 1, otherwise 0.
    cout << (5 | 3) << endl;

    // ^ (Bitwise XOR): It performs a bitwise XOR (exclusive OR) operation on the two operands. The result is 1 if the bits are different, otherwise 0.
    cout << (5 ^ 3) << endl;

    // ~ (Bitwise NOT): It performs a bitwise NOT operation on the operand. It flips the bits, i.e., 0 becomes 1 and 1 becomes 0.
    // << (Left Shift): It shifts the bits of the operand to the left by the specified number of positions. It is equivalent to multiplying the operand by 2^n (if we are shifting n positions to the left).
    

    // >> (Right Shift): It shifts the bits of the operand to the right by the specified number of positions. It is equivalent to dividing the operand by 2^n (if we are shifting n positions to the right).
    cout << (5 >> 1) << endl;

    // Data Types Modifiers
    // Data type modifiers are used with the built-in data types to modify the length of the data that a particular data type can hold. The data type modifiers supported by C++ are:

    // signed: It is used to declare variables that can hold both positive and negative values.
    signed int x = 10;
    cout << x << endl;

    // unsigned: It is used to declare variables that can hold only non-negative values (zero and positive values).n
    unsigned int y = 10;
    cout << y << endl;

    // short: It is used to reduce the size of the data type. For example, short int x = 10; will allocate less memory than int x = 10;.
    short int z = 10;
    cout << z << endl;

    // long: It is used to increase the size of the data type. For example, long int x = 10; will allocate more memory than int x = 10;.
    long int a = 10;
    cout << a << endl;

    // long long: It is used to increase the size of the data type further than long. For example, long long int x = 10; will allocate more memory than long int x = 10;.
    long long int b = 10;
    cout << b << endl;
}