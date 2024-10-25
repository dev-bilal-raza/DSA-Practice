#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum is: " << a+b << endl;
    cout << "Hello World! bilal raza" << endl;
}

// Binary Numbers
// Computer stores every single digit in binary/machine format. Binary is base 2 number system.
// Binary Numbers are represented by 0 and 1.

// 0/1 -> 1 bit
// 8 bits -> 1 byte

// integer takes 4 bytes in memory
// char takes 1 byte in memory
// float takes 4 bytes in memory
// double takes 8 bytes in memory
// bool takes 1 byte in memory


// Unuary Operators:
// a++ -> post increment
// a-- -> post decrement
// ++a -> pre increment
// --a -> pre decrement

int main(){
    int a = 5;
    int b = a++;
    cout << "PI: " << endl << "a: " << a << endl;
    cout << "b: " << b << endl;

    int c = 5;
    int d = --c;
    cout << "PD: " << endl << "c: " << c << endl;
    cout << "d: " << d << endl;
}