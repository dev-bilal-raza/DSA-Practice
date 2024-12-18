#include <iostream>
using namespace std;

int main (){

    // Nested for-loops
    // int n = 4;
    // int charac = 1;
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout << charac ;
    //         charac ++;
    //     }
    //     cout << endl;
    // } 

    // Question 02 -> left-aligned right-angled triangle made of asterisks (*).
    // int n = 7;
    // for (int i=1; i<=n; i++){
    //     for (int j=0; j<i; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // } 

    // Question 03 -> left-aligned triangle with decreasing numbers in each row
    // int n = 5;
    // for (int i=1; i<=n; i++){
    //     for (int j=i; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // Question 04 ->  right-aligned triangle with decreasing width.
    // int n = 5;
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for (int k=1; k<=n-i; k++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // Question 05 -> pyramid pattern
    int n = 5;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for (int k=1; k<=i+1; k++){
            cout << k;
        }
        for (int l=i; l>=1; l--){
            cout << l;
        }
        
        cout << endl;
    }
}