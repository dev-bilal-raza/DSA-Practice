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
    // vector<int> vec = {1, 2};
    // cout << "Capacity of Vector before pushing any value: " << vec.capacity() << endl;

    // vec.push_back(3);
    // cout << "Capacity of Vector after pushing one element: " << vec.capacity() << endl;

    // vec.push_back(4);
    // cout << "Capacity of Vector after pushing one more element: " << vec.capacity() << endl;

    // for (int value : vec){
    //     cout << value << endl;
    // }

    // Vector Methods:
    // vector<int> vec = {1, 2};
    // push_back() - Adds an element to the end
    // vec.push_back(3);

    // pop_back() - Removes an element from the end
    // vec.pop_back();

    // size() - Returns the number of elements
    // vec.size();

    // capacity() - Returns the size of the storage space currently allocated for the vector, expressed in terms of elements
    // vec.capacity();

    // begin() - Returns an iterator pointing to the first element in the vector
    // vec.begin();

    // end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector
    // vec.end();

    // clear() - Removes all elements from the vector
    // vec.clear();

    // erase() - Removes a single element or a range of elements
    // vec.erase(vec.begin() + 1);

    // insert() - Inserts new elements before the element at the specified position

    // empty() - Returns whether the container is empty
    // cout << vec.empty();

    // Static and Dynamic memory allocation
    // Static memory allocation is done at compile time while dynamic memory allocation is done at run time. Static memory allocation is done using arrays while dynamic memory allocation is done using pointers. Static memory allocates in stack while dynamic memory allocates in heap.

    // Single Number Problem
    vector<int> single_num_vec = {1, 2, 1, 2, 4};
    int ans = 0;
    for (int value : single_num_vec)
    {
        ans ^= value;
    }
    cout << "Found Unique Number: " << ans << endl;

    return 0;
}