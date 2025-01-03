#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // What is STL?
    // Standard Template Library is a collection of C++ template classes to provide common programming data structures and functions such as lists, stacks, vector, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized.

    // What are Vectors?
    // Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

    // Vector Syntax
    // vector<int> vec(3, 2);
    vector<int> vec = {1, 2};
    cout << "Capacity of Vector before pushing any value: " << vec.capacity() << endl;

    vec.push_back(3);
    cout << "Capacity of Vector after pushing one element: " << vec.capacity() << endl;

    vec.push_back(4);
    cout << "Capacity of Vector after pushing one more element: " << vec.capacity() << endl;

    for (int value : vec){
        cout << value << endl;
    }

    // Vector Methods

    // Static and Dynamic memory allocation
    // Static memory allocation is done at compile time while dynamic memory allocation is done at run time. Static memory allocation is done using arrays while dynamic memory allocation is done using pointers. Static memory allocates in stack while dynamic memory allocates in heap.

    // Single Number Problem
    return 0;
}