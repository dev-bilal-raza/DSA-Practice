#include <iostream>
using namespace std;

// Decimal to Binary:
// To convert a decimal number to binary, we need to divide the decimal number by 2 and store the remainder. We need to repeat this process until the decimal number is greater than 0. The binary number is the remainder of the division in reverse order.
// For example, to convert 81 to binary:
// 81 / 2 = 40 remainder 1
// 40 / 2 = 20 remainder 0
// 20 / 2 = 10 remainder 0
// 10 / 2 = 5 remainder 0
// 5 / 2 = 2 remainder 1
// 2 / 2 = 1 remainder 0
// 1 / 2 = 0 remainder 1
// The binary number is 1010001.
int decToBin(int decNum)
{
    /*
    Explanation for Decimal to Binary:
        1. Initialize answer and pow to 0 and 1 respectively.
        2. While the decimal number is greater than 0, do the following:
            a. Find the remainder of the decimal number when divided by 2.
            b. Divide the decimal number by 2.
            c. Add the remainder multiplied by pow to the answer.
            d. Multiply pow by 10.
        3. Return the answer.
    */
    int answer = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        answer += (rem * pow);
        pow *= 10;
    }
    return answer;
}

// Decimal to Binary:
// To convert a binary number to decimal, we need to multiply each digit of the binary number by 2 raised to the power of its position. We need to repeat this process until the binary number is greater than 0. The decimal number is the sum of the multiplication of each digit by 2 raised to the power of its position.
// For example, to convert 101001 to decimal:
// 1 * 2^5 + 0 * 2^4 + 1 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0 = 32 + 0 + 8 + 0 + 0 + 1 = 41
int binToDec(int binNum)
{
    /*
    Explanation for Binary to Decimal:
        1. Initialize answer and pow to 0 and 1 respectively.
        2. While the binary number is greater than 0, do the following:
            a. Find the remainder of the binary number when divided by 10.
            b. Divide the binary number by 10.
            c. Add the remainder multiplied by pow to the answer.
            d. Multiply pow by 2.
        3. Return the answer.
    */
    int answer = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        cout << rem << endl;
        binNum = binNum / 10;
        cout << binNum << endl;
        answer += (rem * pow);
        pow *= 2;
    }
    return answer;
}

int main()
{
    // int answer = decToBin(81);
    int answer = binToDec(101001);
    cout << answer << endl;
    return answer;
}
