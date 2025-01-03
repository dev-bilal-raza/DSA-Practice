#include <iostream>
using namespace std;

int linearSearch(int arr[], int siz, int target)
{
    bool hasFound = false;
    for (int i = 0; i < siz; i++)
    {
        if (arr[i] == target)
        {
            hasFound = true;
            cout << "Element Found at Postion: " << ++i << endl;
            break;
        }
    }
    if (not hasFound)
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

int main()
{
    //=============================================== Array Data Structure
    // Loops
    // const int size = 5;
    // int arr[size] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // int size = 5;
    // int arr[size];
    // for (int i = 0; i < sizeof(arr) / sizeof(1); i++){
    //     cout << "Enter a number: ";
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < sizeof(arr) / sizeof(1); i++){
    //     cout << arr[i] << endl;
    // }

    // const int size = 5;
    // int arr[] = {1, 1, 2, 3, 4};
    // for (int i : arr)
    // {
    //     cout << i << endl;
    // }

    //=============================================== Linear Search
    int arr[6] = {1, 2, 3, 4, 5, 6};
    linearSearch(arr, 6, 6);


    //=============================================== Reverse Array
    // const int size = 10;
    // int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // 2 Pointer Technique

    // First Method
    // for (int i = 0; i < size/2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[size - i - 1];
    //     arr[size - i - 1] = temp;
    // }

    // Second Method
    // for (int i = 0; i < size / 2; i++)
    // {
    //     swap(arr[i], arr[size - i - 1]);
    // }

    // Third Method
    // int i = 0;
    // while (i < size / 2)
    // {
    //     swap(arr[i], arr[size - i - 1]);
    //     i++;
    // }

    // for (int i : arr)
    // {
    //     cout << i << endl;
    // }
    return 0;
}
